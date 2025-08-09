#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_System_String_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_System_String_.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::HashSet_1_System_String_ {
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_System_String_, GetEnumerator, app::HashSet_1_System_String_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor_1, app::HashSet_1_System_String_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4420, void, ctor_2, app::HashSet_1_System_String_* this_ptr, app::IEnumerable_1_System_String_* collection)
    IL2CPP_REGISTER_METHOD(0x02ABEAC0, bool, Contains, app::HashSet_1_System_String_* this_ptr, app::String* item)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_System_String_* this_ptr, app::String* item)
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, app::HashSet_1_System_String_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::HashSet_1_System_String_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ABEC50, bool, Remove, app::HashSet_1_System_String_* this_ptr, app::String* item)
} // namespace app::classes::System::Collections::Generic::HashSet_1_System_String_
