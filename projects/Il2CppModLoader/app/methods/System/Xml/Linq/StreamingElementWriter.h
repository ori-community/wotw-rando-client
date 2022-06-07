#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Linq::StreamingElementWriter {
    IL2CPP_REGISTER_METHOD(0x00241380, void, ctor, (app::StreamingElementWriter__Boxed * this_ptr, app::XmlWriter * w))
    IL2CPP_REGISTER_METHOD(0x00241390, void, FlushElement, (app::StreamingElementWriter__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002413A0, app::String *, GetPrefixOfNamespace, (app::StreamingElementWriter__Boxed * this_ptr, app::XNamespace * ns, bool allow_default_namespace))
    IL2CPP_REGISTER_METHOD(0x002413B0, void, PushElement, (app::StreamingElementWriter__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002413C0, void, Write, (app::StreamingElementWriter__Boxed * this_ptr, app::Object * content))
    IL2CPP_REGISTER_METHOD(0x002413D0, void, WriteAttribute, (app::StreamingElementWriter__Boxed * this_ptr, app::XAttribute * a))
    IL2CPP_REGISTER_METHODINFO(0x047558A8, StreamingElementWriter_WriteAttribute__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002413E0, void, WriteNode, (app::StreamingElementWriter__Boxed * this_ptr, app::XNode * n))
    IL2CPP_REGISTER_METHOD(0x00241430, void, WriteStreamingElement, (app::StreamingElementWriter__Boxed * this_ptr, app::XStreamingElement * e))
    IL2CPP_REGISTER_METHOD(0x00241440, void, WriteString, (app::StreamingElementWriter__Boxed * this_ptr, app::String * s))
}
