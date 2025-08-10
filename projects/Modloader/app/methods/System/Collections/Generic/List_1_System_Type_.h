#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Type_.h>
#include <Modloader/app/structs/List_1_System_Type_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Type_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_Type_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_System_Type_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_System_Type_* this_ptr, app::Type* item)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Type_* this_ptr, app::Type* item)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, app::List_1_System_Type_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Type*, get_Item, app::List_1_System_Type_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Type__Array*, ToArray, app::List_1_System_Type_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Type_, GetEnumerator, app::List_1_System_Type_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, app::List_1_System_Type_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, app::List_1_System_Type_* this_ptr, app::Type* item)
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_3, app::List_1_System_Type_* this_ptr, app::IEnumerable_1_System_Type_* collection)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_System_Type_* this_ptr, app::Type* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_Type_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, app::List_1_System_Type_* this_ptr, int32_t index, int32_t count)
} // namespace app::classes::System::Collections::Generic::List_1_System_Type_
