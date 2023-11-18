#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_KeyCode_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_KeyCode_.h>
#include <Modloader/app/structs/KeyCode__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_KeyCode_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_UnityEngine_KeyCode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BB43A0, bool, TryGetValue, (app::Dictionary_2_System_Int32_UnityEngine_KeyCode_ * this_ptr, int32_t key, app::KeyCode__Enum* value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_UnityEngine_KeyCode_ * this_ptr, int32_t key, app::KeyCode__Enum value))
    IL2CPP_REGISTER_METHOD(0x02BB2890, bool, ContainsValue, (app::Dictionary_2_System_Int32_UnityEngine_KeyCode_ * this_ptr, app::KeyCode__Enum value))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_UnityEngine_KeyCode_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32_UnityEngine_KeyCode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC6E0, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_KeyCode_, GetEnumerator, (app::Dictionary_2_System_Int32_UnityEngine_KeyCode_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_KeyCode_
