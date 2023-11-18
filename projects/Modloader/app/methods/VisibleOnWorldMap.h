#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VisibleOnWorldMap.h>
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::VisibleOnWorldMap {
    IL2CPP_REGISTER_METHOD(0x008C1CB0, void, AlwaysAddToAll, (app::VisibleOnWorldMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, ShouldRevealWhenOnScreen, (app::VisibleOnWorldMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, GetIsSecret, (app::VisibleOnWorldMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::ConditionUberState*, get_VisibilityCondition, (app::VisibleOnWorldMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C1CC0, bool, get_MeetsRevealCondition, (app::VisibleOnWorldMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C1DA0, bool, get_IsInCameraBoundingBox, (app::VisibleOnWorldMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C1FD0, app::SerializedBooleanUberState*, get_CollectedState, (app::VisibleOnWorldMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C2440, void, OnUpdate, (app::VisibleOnWorldMap * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, (app::VisibleOnWorldMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C25F0, void, ctor, (app::VisibleOnWorldMap * this_ptr))
} // namespace app::classes::VisibleOnWorldMap
