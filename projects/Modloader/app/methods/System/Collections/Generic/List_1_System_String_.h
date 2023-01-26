#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_String_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_String_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_String_ * this_ptr, app::String* item))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::String__Array*, ToArray, (app::List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::String*, get_Item, (app::List_1_System_String_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_System_String_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo_1, (app::List_1_System_String_ * this_ptr, int32_t index, app::String__Array* array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_String_, GetEnumerator, (app::List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_System_String_ * this_ptr, app::String* item))
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_3, (app::List_1_System_String_ * this_ptr, app::IEnumerable_1_System_String_* collection))
    IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo_2, (app::List_1_System_String_ * this_ptr, app::String__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_System_String_ * this_ptr, app::String* item))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_System_String_ * this_ptr, app::IEnumerable_1_System_String_* collection))
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_System_String_ * this_ptr, int32_t index, app::String* item))
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_System_String_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort, (app::List_1_System_String_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_System_String_
