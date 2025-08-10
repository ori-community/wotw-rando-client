#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Cheat.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/Input_InputButtonProcessor__Array.h>

namespace app::classes::Cheat {
    IL2CPP_REGISTER_METHOD(
        0x00522850,
        void,
        ctor,
        app::Cheat* this_ptr,
        app::Input_InputButtonProcessor__Array* combination,
        app::Action* action,
        app::Func_1_Boolean_* condition
    )
    IL2CPP_REGISTER_METHOD(0x0131C520, bool, IsFirstInCombination, app::Cheat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0131C580, bool, CanContinue, app::Cheat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0131C5E0, void, GoNext, app::Cheat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0073DA30, void, Reset, app::Cheat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0131C5F0, bool, IsStarted, app::Cheat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0131C600, bool, IsFinished, app::Cheat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0131C630, void, Perform, app::Cheat* this_ptr)
} // namespace app::classes::Cheat
