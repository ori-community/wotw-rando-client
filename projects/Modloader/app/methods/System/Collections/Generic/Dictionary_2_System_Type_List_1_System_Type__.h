#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_List_1_System_Type_.h>
#include <Modloader/app/structs/List_1_System_Type_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_List_1_System_Type__ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Type_List_1_System_Type_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_System_Type_List_1_System_Type_* this_ptr, app::Type* key, app::List_1_System_Type_* value)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::List_1_System_Type_*, get_Item, app::Dictionary_2_System_Type_List_1_System_Type_* this_ptr, app::Type* key)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_List_1_System_Type__
