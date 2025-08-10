#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Dynamic::ExpandoObject_MetaExpando__GetDynamicMemberNames_d__6 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F926B0, bool, MoveNext, app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, IEnumerator_string__get_Current, app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F928B0, void, IEnumerator_Reset, app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F92900,
        app::IEnumerator_1_System_String_*,
        IEnumerable_string__GetEnumerator,
        app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01F92AF0, app::IEnumerator*, IEnumerable_GetEnumerator, app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6* this_ptr)
} // namespace app::classes::System::Dynamic::ExpandoObject_MetaExpando__GetDynamicMemberNames_d__6
