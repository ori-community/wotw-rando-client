#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_System_Int32_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02BCDF80, bool, TryGetValue, app::Dictionary_2_System_Type_System_Int32_* this_ptr, app::Type* key, int32_t* value)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, app::Dictionary_2_System_Type_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_System_Type_System_Int32_* this_ptr, app::Type* key, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, app::Dictionary_2_System_Type_System_Int32_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_System_Type_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Type_System_Int32_* this_ptr, app::Type* key)
    IL2CPP_REGISTER_METHOD(0x02BCC050, int32_t, get_Item, app::Dictionary_2_System_Type_System_Int32_* this_ptr, app::Type* key)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_Int32_
