from conans import ConanFile, CMake

class PocoTimerConan(ConanFile):
   settings = "os", "compiler", "build_type", "arch"
   requires = "morse/[>=0.1, include_prerelease=True]@pix4d/develop"
   generators = "cmake", "gcc", "txt"

   def imports(self):
      self.copy("*.h", dst="include", src="morse")
      self.copy('*.so*', src='lib', dst='lib')
      self.copy('*.c*', src='lib', dst='lib')

   def build(self):
      cmake = CMake(self)
      cmake.configure()
      cmake.build()
