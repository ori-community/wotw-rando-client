#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_Object_.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_Object_ {
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_UnityEngine_Object_ * this_ptr, int32_t key, app::Object_1* value))
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, (app::Dictionary_2_System_Int32_UnityEngine_Object_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32_UnityEngine_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::Object_1*, get_Item, (app::Dictionary_2_System_Int32_UnityEngine_Object_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_UnityEngine_Object_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_Object_
