#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BindingRestrictions_TestBuilder_AndNode.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_.h>
#include <Modloader/app/structs/Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___Boxed.h>

namespace app::classes::System::Collections::Generic::Stack_1_T__Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ {
    IL2CPP_REGISTER_METHOD(
        0x00233A20,
        void,
        ctor,
        app::Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___Boxed* this_ptr,
        app::Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_* stack
    )
    IL2CPP_REGISTER_METHOD(0x002337F0, void, Dispose, app::Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00233A50, bool, MoveNext, app::Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00233A60,
        app::BindingRestrictions_TestBuilder_AndNode,
        get_Current,
        app::Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00233AA0,
        void,
        ThrowEnumerationNotStartedOrEnded,
        app::Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00233AB0,
        app::Object*,
        IEnumerator_get_Current,
        app::Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00233B60,
        void,
        IEnumerator_Reset,
        app::Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Stack_1_T__Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_
