#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Xml_Linq_XNode_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XContainer_Nodes_d_18.h>
#include <Modloader/app/structs/XNode.h>

namespace app::classes::System::Xml::Linq::XContainer__Nodes_d__18 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, app::XContainer_Nodes_d_18* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::XContainer_Nodes_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03034E60, bool, MoveNext, app::XContainer_Nodes_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XNode*, IEnumerator_XNode__get_Current, app::XContainer_Nodes_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03034F00, void, IEnumerator_Reset, app::XContainer_Nodes_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::XContainer_Nodes_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03034F50, app::IEnumerator_1_System_Xml_Linq_XNode_*, IEnumerable_XNode__GetEnumerator, app::XContainer_Nodes_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03035140, app::IEnumerator*, IEnumerable_GetEnumerator, app::XContainer_Nodes_d_18* this_ptr)
} // namespace app::classes::System::Xml::Linq::XContainer__Nodes_d__18
