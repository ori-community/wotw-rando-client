#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPushable.h>
#include <Modloader/app/structs/Pushables.h>

namespace app::classes::Pushables {
    IL2CPP_REGISTER_METHOD(0x00E86C50, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00E86D20, void, Add, app::IPushable* pushable)
    IL2CPP_REGISTER_METHOD(0x00E86DE0, void, Remove, app::IPushable* pushable)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Pushables* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E86EC0, void, cctor, )
} // namespace app::classes::Pushables
