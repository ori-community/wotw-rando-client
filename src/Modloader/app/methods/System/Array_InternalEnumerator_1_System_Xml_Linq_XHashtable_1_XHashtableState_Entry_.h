#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_System_Xml_Linq_XHashtable_1_XHashtableState_Entry___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object_.h>

namespace app::classes::System::Array_InternalEnumerator_1_System_Xml_Linq_XHashtable_1_XHashtableState_Entry_ {
    IL2CPP_REGISTER_METHOD(
        0x00160580,
        void,
        ctor,
        app::Array_InternalEnumerator_1_System_Xml_Linq_XHashtable_1_XHashtableState_Entry___Boxed* this_ptr,
        app::Array* array
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Array_InternalEnumerator_1_System_Xml_Linq_XHashtable_1_XHashtableState_Entry___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, app::Array_InternalEnumerator_1_System_Xml_Linq_XHashtable_1_XHashtableState_Entry___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001721C0,
        app::XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object_,
        get_Current,
        app::Array_InternalEnumerator_1_System_Xml_Linq_XHashtable_1_XHashtableState_Entry___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00160610,
        void,
        IEnumerator_Reset,
        app::Array_InternalEnumerator_1_System_Xml_Linq_XHashtable_1_XHashtableState_Entry___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001721F0,
        app::Object*,
        IEnumerator_get_Current,
        app::Array_InternalEnumerator_1_System_Xml_Linq_XHashtable_1_XHashtableState_Entry___Boxed* this_ptr
    )
} // namespace app::classes::System::Array_InternalEnumerator_1_System_Xml_Linq_XHashtable_1_XHashtableState_Entry_
