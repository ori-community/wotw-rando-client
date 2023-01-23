#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_KeyCode_System_Int32_.h>
#include <Modloader/app/structs/KeyCode__Enum.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_UnityEngine_KeyCode_System_Int32_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_KeyCode_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_KeyCode_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776F70, Dictionary_2_UnityEngine_KeyCode_System_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_UnityEngine_KeyCode_System_Int32_ * this_ptr, app::KeyCode__Enum key, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x047710F0, Dictionary_2_UnityEngine_KeyCode_System_Int32__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC6E0, app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_KeyCode_System_Int32_, GetEnumerator, (app::Dictionary_2_UnityEngine_KeyCode_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047712F0, Dictionary_2_UnityEngine_KeyCode_System_Int32__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_UnityEngine_KeyCode_System_Int32_ * this_ptr, app::KeyCode__Enum key, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04702C78, Dictionary_2_UnityEngine_KeyCode_System_Int32__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BB43A0, bool, TryGetValue, (app::Dictionary_2_UnityEngine_KeyCode_System_Int32_ * this_ptr, app::KeyCode__Enum key, int32_t* value))
    IL2CPP_REGISTER_METHODINFO(0x04769E98, Dictionary_2_UnityEngine_KeyCode_System_Int32__TryGetValue__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_KeyCode_System_Int32_
