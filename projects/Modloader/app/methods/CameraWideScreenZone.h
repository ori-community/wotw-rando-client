#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraWideScreenZone.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CameraWideScreenZone {
    IL2CPP_REGISTER_METHOD(0x00B21450, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00B21530, void, OnEnable, app::CameraWideScreenZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B21600, void, OnDestroy, app::CameraWideScreenZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B216C0, float, NormalizedMarginPenetration, app::CameraWideScreenZone* this_ptr, app::Vector3 world_position)
    IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_Strength, app::CameraWideScreenZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B21B50, void, UpdateOffset, app::CameraWideScreenZone* this_ptr, float dt, app::Vector3 world_position)
    IL2CPP_REGISTER_METHOD(0x00417920, app::SelectableCategory__Enum, get_Category, app::CameraWideScreenZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B21D30, void, ctor, app::CameraWideScreenZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B21D40, void, cctor, )
} // namespace app::classes::CameraWideScreenZone
