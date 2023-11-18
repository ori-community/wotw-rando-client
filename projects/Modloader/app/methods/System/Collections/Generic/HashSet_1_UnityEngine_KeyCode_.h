#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_UnityEngine_KeyCode_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_UnityEngine_KeyCode_.h>
#include <Modloader/app/structs/KeyCode__Enum.h>

namespace app::classes::System::Collections::Generic::HashSet_1_UnityEngine_KeyCode_ {
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_UnityEngine_KeyCode_ * this_ptr, app::KeyCode__Enum item))
    IL2CPP_REGISTER_METHOD(0x02AB9220, bool, Remove, (app::HashSet_1_UnityEngine_KeyCode_ * this_ptr, app::KeyCode__Enum item))
    IL2CPP_REGISTER_METHOD(0x02AB4FD0, app::HashSet_1_T_Enumerator_UnityEngine_KeyCode_, GetEnumerator, (app::HashSet_1_UnityEngine_KeyCode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_UnityEngine_KeyCode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, (app::HashSet_1_UnityEngine_KeyCode_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::HashSet_1_UnityEngine_KeyCode_
