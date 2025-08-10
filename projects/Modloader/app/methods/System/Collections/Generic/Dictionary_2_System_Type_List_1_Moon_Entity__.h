#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_List_1_Moon_Entity_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_Moon_Entity_.h>
#include <Modloader/app/structs/List_1_Moon_Entity_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_List_1_Moon_Entity__ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Type_List_1_Moon_Entity_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_Type_List_1_Moon_Entity_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Type_List_1_Moon_Entity_* this_ptr, app::Type* key)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_System_Type_List_1_Moon_Entity_* this_ptr, app::Type* key, app::List_1_Moon_Entity_* value)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::List_1_Moon_Entity_*, get_Item, app::Dictionary_2_System_Type_List_1_Moon_Entity_* this_ptr, app::Type* key)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Type_List_1_Moon_Entity_* this_ptr,
        app::Type* key,
        app::List_1_Moon_Entity_** value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_Moon_Entity_*,
        get_Values,
        app::Dictionary_2_System_Type_List_1_Moon_Entity_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_List_1_Moon_Entity__
