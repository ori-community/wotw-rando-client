#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Type_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Type_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_Type_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_System_Type_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, app::Dictionary_2_System_Int32_System_Type_* this_ptr, int32_t key, app::Type* value)
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::Type*, get_Item, app::Dictionary_2_System_Int32_System_Type_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_System_Int32_System_Type_* this_ptr, int32_t key, app::Type* value)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Int32_System_Type_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Type_,
        GetEnumerator,
        app::Dictionary_2_System_Int32_System_Type_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_Type_
