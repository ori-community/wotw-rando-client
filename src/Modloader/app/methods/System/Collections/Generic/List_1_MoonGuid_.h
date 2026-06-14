#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_MoonGuid_.h>
#include <Modloader/app/structs/List_1_MoonGuid_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_MoonGuid_.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/MoonGuid__Array.h>

namespace app::classes::System::Collections::Generic::List_1_MoonGuid_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_MoonGuid_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_MoonGuid_* this_ptr, app::MoonGuid* item)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_MoonGuid_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_1, app::List_1_MoonGuid_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, app::List_1_MoonGuid_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::MoonGuid__Array*, ToArray, app::List_1_MoonGuid_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_MoonGuid_, GetEnumerator, app::List_1_MoonGuid_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonGuid*, get_Item, app::List_1_MoonGuid_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, app::List_1_MoonGuid_* this_ptr, app::Comparison_1_MoonGuid_* comparison)
} // namespace app::classes::System::Collections::Generic::List_1_MoonGuid_
