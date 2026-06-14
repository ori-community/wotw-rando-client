#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UberSwarm.h>
#include <Modloader/app/structs/UberSwarm_SwarmerEvent__Enum.h>
#include <Modloader/app/structs/UberSwarmer.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UberSwarm {
    IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, get_IsSuspended, app::UberSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1A3C0, void, set_IsSuspended, app::UberSwarm* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0057AAC0, app::SuspendableMask__Enum, get_Mask, app::UberSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0128BD10, void, set_Mask, app::UberSwarm* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00866A10, void, ctor, app::UberSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F948A0, void, Awake, app::UberSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0128BDC0, void, OnDestroy, app::UberSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, app::UberSwarm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSwarmerEvent, app::UberSwarm* this_ptr, app::UberSwarm_SwarmerEvent__Enum e, app::UberSwarmer* swarmer)
    IL2CPP_REGISTER_METHOD(0x0128BE60, void, Add, app::UberSwarm* this_ptr, app::UberSwarmer* swarmer)
    IL2CPP_REGISTER_METHOD(0x0128BF00, void, Remove, app::UberSwarm* this_ptr, app::UberSwarmer* swarmer)
    IL2CPP_REGISTER_METHOD(0x0128BFA0, app::Vector2, SwarmCenter, app::UberSwarm* this_ptr)
} // namespace app::classes::UberSwarm
