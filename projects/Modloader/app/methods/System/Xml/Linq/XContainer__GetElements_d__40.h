#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Xml_Linq_XElement_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XContainer_GetElements_d_40.h>
#include <Modloader/app/structs/XElement.h>

namespace app::classes::System::Xml::Linq::XContainer__GetElements_d__40 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, app::XContainer_GetElements_d_40* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::XContainer_GetElements_d_40* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03034A60, bool, MoveNext, app::XContainer_GetElements_d_40* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XElement*, IEnumerator_XElement__get_Current, app::XContainer_GetElements_d_40* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03034C00, void, IEnumerator_Reset, app::XContainer_GetElements_d_40* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::XContainer_GetElements_d_40* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x03034C50,
        app::IEnumerator_1_System_Xml_Linq_XElement_*,
        IEnumerable_XElement__GetEnumerator,
        app::XContainer_GetElements_d_40* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x03034E50, app::IEnumerator*, IEnumerable_GetEnumerator, app::XContainer_GetElements_d_40* this_ptr)
} // namespace app::classes::System::Xml::Linq::XContainer__GetElements_d__40
