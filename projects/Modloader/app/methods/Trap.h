#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Trap.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::Trap {
    IL2CPP_REGISTER_METHOD(0x00B0F370, void, Awake, (app::Trap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B0F570, void, OnDestroy, (app::Trap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B0F740, void, OnRestoreCheckpoint, (app::Trap * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04781740, Trap_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B0F750, void, Update, (app::Trap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B0FCD0, void, Trigger, (app::Trap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B0FF70, void, Untrap, (app::Trap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B10180, void, HandleBlinking, (app::Trap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B10320, void, ChangeColor, (app::Trap * this_ptr, app::Color color))
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, (app::Trap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, (app::Trap * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006DC050, app::SuspendableMask__Enum, get_Mask, (app::Trap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B103E0, void, set_Mask, (app::Trap * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00B10490, void, ctor, (app::Trap * this_ptr))
} // namespace app::classes::Trap
