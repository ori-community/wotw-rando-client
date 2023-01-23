#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_KeyCode_.h>
#include <Modloader/app/structs/KeyCode__Enum.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_UnityEngine_KeyCode_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_UnityEngine_KeyCode_ {
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_UnityEngine_KeyCode_ * this_ptr, app::KeyCode__Enum item))
    IL2CPP_REGISTER_METHODINFO(0x0470B0B0, HashSet_1_UnityEngine_KeyCode__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB9220, bool, Remove, (app::HashSet_1_UnityEngine_KeyCode_ * this_ptr, app::KeyCode__Enum item))
    IL2CPP_REGISTER_METHODINFO(0x0478C268, HashSet_1_UnityEngine_KeyCode__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4FD0, app::HashSet_1_T_Enumerator_UnityEngine_KeyCode_, GetEnumerator, (app::HashSet_1_UnityEngine_KeyCode_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478EB00, HashSet_1_UnityEngine_KeyCode__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_UnityEngine_KeyCode_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047545E0, HashSet_1_UnityEngine_KeyCode__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, (app::HashSet_1_UnityEngine_KeyCode_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04798DE8, HashSet_1_UnityEngine_KeyCode___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::HashSet_1_UnityEngine_KeyCode_
