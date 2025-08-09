#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyCode__Enum.h>
#include <Modloader/app/structs/KeyCode__Enum__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_KeyCode_.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_KeyCode_ {
    IL2CPP_REGISTER_METHOD(0x02F1CC20, bool, Contains, app::List_1_UnityEngine_KeyCode_* this_ptr, app::KeyCode__Enum item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_UnityEngine_KeyCode_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1C970, void, Add, app::List_1_UnityEngine_KeyCode_* this_ptr, app::KeyCode__Enum item)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::KeyCode__Enum__Array*, ToArray, app::List_1_UnityEngine_KeyCode_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_KeyCode_
