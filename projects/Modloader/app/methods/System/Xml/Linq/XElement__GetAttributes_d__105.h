#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XElement_GetAttributes_d_105.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Xml_Linq_XAttribute_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XAttribute.h>

namespace app::classes::System::Xml::Linq::XElement__GetAttributes_d__105 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::XElement_GetAttributes_d_105 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::XElement_GetAttributes_d_105 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030387C0, bool, MoveNext, (app::XElement_GetAttributes_d_105 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XAttribute*, IEnumerator_XAttribute__get_Current, (app::XElement_GetAttributes_d_105 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03038870, void, IEnumerator_Reset, (app::XElement_GetAttributes_d_105 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::XElement_GetAttributes_d_105 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030388C0, app::IEnumerator_1_System_Xml_Linq_XAttribute_*, IEnumerable_XAttribute__GetEnumerator, (app::XElement_GetAttributes_d_105 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03038AC0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::XElement_GetAttributes_d_105 * this_ptr))
} // namespace app::classes::System::Xml::Linq::XElement__GetAttributes_d__105
