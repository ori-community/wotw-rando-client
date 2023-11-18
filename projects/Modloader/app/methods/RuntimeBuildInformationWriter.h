#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/RuntimeBuildInformation.h>

namespace app::classes::RuntimeBuildInformationWriter {
    IL2CPP_REGISTER_METHOD(0x013749E0, app::String*, get_ResourcesPath, ())
    IL2CPP_REGISTER_METHOD(0x01374AD0, void, Write, (app::RuntimeBuildInformation * runtime_build_information))
} // namespace app::classes::RuntimeBuildInformationWriter
