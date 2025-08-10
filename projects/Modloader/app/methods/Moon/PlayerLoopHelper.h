#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_.h>
#include <Modloader/app/structs/PlayerLoopHelper.h>
#include <Modloader/app/structs/PlayerLoopHelper_InsertionMode__Enum.h>
#include <Modloader/app/structs/PlayerLoopSystem.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::PlayerLoopHelper {
    IL2CPP_REGISTER_METHOD(
        0x03159180,
        void,
        Insert,
        app::List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_* list,
        app::PlayerLoopSystem system,
        app::PlayerLoopHelper_InsertionMode__Enum insertion_mode,
        app::String* insertion_point
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerLoopHelper* this_ptr)
} // namespace app::classes::Moon::PlayerLoopHelper
