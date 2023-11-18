#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Reflection_FieldInfo_.h>
#include <Modloader/app/structs/FieldInfo_1.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_Reflection_FieldInfo_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_System_Reflection_FieldInfo_ * this_ptr, int32_t key, app::FieldInfo_1** value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_System_Reflection_FieldInfo_ * this_ptr, int32_t key, app::FieldInfo_1* value))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, (app::Dictionary_2_System_Int32_System_Reflection_FieldInfo_ * this_ptr, int32_t capacity))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_Reflection_FieldInfo_
