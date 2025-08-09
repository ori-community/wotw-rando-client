#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonSwarm.h>
#include <Modloader/app/structs/MoonSwarmer.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::MoonSwarm {
    IL2CPP_REGISTER_METHOD(0x00CA25B0, bool, get_IsSuspended, app::MoonSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CA25C0, void, set_IsSuspended, app::MoonSwarm* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00989BF0, app::SuspendableMask__Enum, get_Mask, app::MoonSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01461CD0, void, set_Mask, app::MoonSwarm* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x01461D90, app::Rect, get_LimitRect, app::MoonSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006142D0, bool, get_IsLimitValid, app::MoonSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008663D0, float, get_LimitBorder, app::MoonSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01461DA0, void, Awake, app::MoonSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014624C0, void, OnDestroy, app::MoonSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01462560, void, Update, app::MoonSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01462980, void, Add, app::MoonSwarm* this_ptr, app::MoonSwarmer* swarmer)
    IL2CPP_REGISTER_METHOD(0x01462A20, void, Remove, app::MoonSwarm* this_ptr, app::MoonSwarmer* swarmer)
    IL2CPP_REGISTER_METHOD(0x01462AC0, app::Vector2, SwarmCenter, app::MoonSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01462D90, bool, GetSwarmerPosition, app::MoonSwarm* this_ptr, int32_t index, app::Vector2* position)
    IL2CPP_REGISTER_METHOD(0x01462ED0, void, UpdateLimitRect, app::MoonSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01463080, void, OnDrawGizmos, app::MoonSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01463190, void, OnDrawGizmosSelected, app::MoonSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01463260, void, DrawGizmosForSwarmer, app::MoonSwarm* this_ptr, app::MoonSwarmer* current)
    IL2CPP_REGISTER_METHOD(0x01463D10, void, ctor, app::MoonSwarm* this_ptr)
} // namespace app::classes::MoonSwarm
