#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode_.h>
#include <Modloader/app/structs/EnumDebugMenuItem_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode_.h>
#include <Modloader/app/structs/Func_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::EnumDebugMenuItem_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode_ {
    IL2CPP_REGISTER_METHOD(
        0x019E1D40,
        void,
        ctor,
        app::EnumDebugMenuItem_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode_* this_ptr,
        app::String* path,
        app::String* text,
        app::Func_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode_* getter,
        app::Action_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode_* setter,
        app::String* help,
        bool should_show_only_selected
    )
}
