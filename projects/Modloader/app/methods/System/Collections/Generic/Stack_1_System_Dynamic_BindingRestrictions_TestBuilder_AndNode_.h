#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BindingRestrictions_TestBuilder_AndNode.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/BindingRestrictions_TestBuilder_AndNode__Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_.h>
#include <Modloader/app/structs/Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_.h>

namespace app::classes::System::Collections::Generic::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ {
    IL2CPP_REGISTER_METHOD(0x02CF6720, app::BindingRestrictions_TestBuilder_AndNode, Pop, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF66A0, app::BindingRestrictions_TestBuilder_AndNode, Peek, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF67F0, void, Push, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr, app::BindingRestrictions_TestBuilder_AndNode item))
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6050, void, ctor_2, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6180, app::Object*, ICollection_get_SyncRoot, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02031F00, void, Clear, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF62E0, bool, Contains, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr, app::BindingRestrictions_TestBuilder_AndNode item))
    IL2CPP_REGISTER_METHOD(0x02CF6330, void, ICollection_CopyTo, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02CF65D0, app::Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_, GetEnumerator, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6610, app::IEnumerator_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF6610, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF68C0, app::BindingRestrictions_TestBuilder_AndNode__Array*, ToArray, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF69C0, void, ThrowForEmptyStack, (app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_
