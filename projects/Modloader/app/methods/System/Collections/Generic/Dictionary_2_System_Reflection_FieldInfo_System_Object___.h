#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Reflection_FieldInfo_System_Object_.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Reflection_FieldInfo_System_Object___ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Reflection_FieldInfo_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Reflection_FieldInfo_System_Object_ * this_ptr, app::FieldInfo_1* key))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::Object__Array*, get_Item, (app::Dictionary_2_System_Reflection_FieldInfo_System_Object_ * this_ptr, app::FieldInfo_1* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Reflection_FieldInfo_System_Object_ * this_ptr, app::FieldInfo_1* key, app::Object__Array* value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Reflection_FieldInfo_System_Object_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Reflection_FieldInfo_System_Object___
