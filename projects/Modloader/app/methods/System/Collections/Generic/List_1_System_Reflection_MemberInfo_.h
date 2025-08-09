#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/List_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MemberInfo_1__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_Reflection_MemberInfo_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_System_Reflection_MemberInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_System_Reflection_MemberInfo_* this_ptr, app::MemberInfo_1* item)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Reflection_MemberInfo_* this_ptr, app::MemberInfo_1* item)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_System_Reflection_MemberInfo_,
        GetEnumerator,
        app::List_1_System_Reflection_MemberInfo_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_System_Reflection_MemberInfo_* this_ptr,
        app::IEnumerable_1_System_Reflection_MemberInfo_* collection
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_Reflection_MemberInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, app::List_1_System_Reflection_MemberInfo_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x02FE8360,
        void,
        ctor_3,
        app::List_1_System_Reflection_MemberInfo_* this_ptr,
        app::IEnumerable_1_System_Reflection_MemberInfo_* collection
    )
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::MemberInfo_1__Array*, ToArray, app::List_1_System_Reflection_MemberInfo_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_System_Reflection_MemberInfo_
