#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XContainer_GetDescendants_d_39.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Xml_Linq_XElement_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XElement.h>

namespace app::classes::System::Xml::Linq::XContainer__GetDescendants_d__39 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::XContainer_GetDescendants_d_39 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::XContainer_GetDescendants_d_39 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03034520, bool, MoveNext, (app::XContainer_GetDescendants_d_39 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XElement*, IEnumerator_XElement__get_Current, (app::XContainer_GetDescendants_d_39 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03034800, void, IEnumerator_Reset, (app::XContainer_GetDescendants_d_39 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::XContainer_GetDescendants_d_39 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03034850, app::IEnumerator_1_System_Xml_Linq_XElement_*, IEnumerable_XElement__GetEnumerator, (app::XContainer_GetDescendants_d_39 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03034A50, app::IEnumerator*, IEnumerable_GetEnumerator, (app::XContainer_GetDescendants_d_39 * this_ptr))
} // namespace app::classes::System::Xml::Linq::XContainer__GetDescendants_d__39
