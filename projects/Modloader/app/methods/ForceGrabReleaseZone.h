#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/ForceGrabReleaseZone.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::ForceGrabReleaseZone {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::ForceGrabReleaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01280470, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01280540, bool, InsideZone, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x01280710, void, Awake, (app::ForceGrabReleaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01280920, void, OnDestroy, (app::ForceGrabReleaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ForceGrabReleaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01280A00, void, cctor, ())
} // namespace app::classes::ForceGrabReleaseZone
