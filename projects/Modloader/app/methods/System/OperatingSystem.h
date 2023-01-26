#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OperatingSystem.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlatformID__Enum.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Version.h>

namespace app::classes::System::OperatingSystem {
    IL2CPP_REGISTER_METHOD(0x0227BA00, void, ctor_1, (app::OperatingSystem * this_ptr, app::PlatformID__Enum platform, app::Version* version))
    IL2CPP_REGISTER_METHOD(0x0227BB50, void, ctor_2, (app::OperatingSystem * this_ptr, app::SerializationInfo* information, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::PlatformID__Enum, get_Platform, (app::OperatingSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Version*, get_Version, (app::OperatingSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_ServicePack, (app::OperatingSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0227BCE0, app::Object*, Clone, (app::OperatingSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0227BE40, void, GetObjectData, (app::OperatingSystem * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0227BF30, app::String*, ToString, (app::OperatingSystem * this_ptr))
} // namespace app::classes::System::OperatingSystem
