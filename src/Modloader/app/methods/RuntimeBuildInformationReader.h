#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeBuildInformation.h>

namespace app::classes::RuntimeBuildInformationReader {
    IL2CPP_REGISTER_METHOD(0x013747D0, app::RuntimeBuildInformation*, Read, )
}
