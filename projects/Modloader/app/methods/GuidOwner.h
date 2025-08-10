#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GuidOwner.h>
#include <Modloader/app/structs/MoonGuid.h>

namespace app::classes::GuidOwner {
    IL2CPP_REGISTER_METHOD(0x01099210, app::MoonGuid*, GetGuid, app::GuidOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010993D0, void, RegenerateGuid, app::GuidOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01099490, app::MoonGuid*, GenerateGUID, )
    IL2CPP_REGISTER_METHOD(0x01099620, bool, IsGuidInitialized, app::GuidOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01099700, void, ctor, app::GuidOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010998B0, void, cctor, )
} // namespace app::classes::GuidOwner
