#! /bin/sh

set -o errexit
set -o xtrace

echo "\n\n*** Configure"
cmake -Hrepo.git -Bbuild \
    -DBUILD_SHARED_LIBS=$BUILD_SHARED_LIBS \

echo "\n\n*** Build"
cmake --build build -- -j "$(nproc)"

CPACK_COMMAND="cpack --config build/CPackConfig.cmake -B "$PWD"/build-dir -D \"CPACK_COMPONENTS_ALL=Development;Runtime\" -D CPACK_PACKAGE_FILE_NAME=$PKG_NAME-$VERSION"
echo "CPACK command : $CPACK_COMMAND"

echo "\n\nDone"
