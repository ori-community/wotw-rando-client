#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IComparer_1_System_Object_.h>
#include <Modloader/app/structs/XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer {
    IL2CPP_REGISTER_METHOD(0x01FBACB0, app::IComparer_1_System_Object_*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x01FBAD50, int32_t, Compare, (app::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHODINFO(0x04772F28, XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_Compare__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBB0F0, void, cctor, ())
} // namespace app::classes::System::Xml::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer
