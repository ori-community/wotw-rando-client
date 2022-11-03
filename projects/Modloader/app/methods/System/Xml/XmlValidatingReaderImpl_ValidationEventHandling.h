#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XmlValidatingReaderImpl_ValidationEventHandling * this_ptr, app::XmlValidatingReaderImpl* reader))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IValidationEventHandling_get_EventHandler, (app::XmlValidatingReaderImpl_ValidationEventHandling * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCB1B0, void, IValidationEventHandling_SendEvent, (app::XmlValidatingReaderImpl_ValidationEventHandling * this_ptr, app::Exception* exception, app::XmlSeverityType__Enum severity))
    IL2CPP_REGISTER_METHODINFO(0x0477FD40, XmlValidatingReaderImpl_ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FCB3C0, void, AddHandler, (app::XmlValidatingReaderImpl_ValidationEventHandling * this_ptr, app::ValidationEventHandler* handler))
} // namespace app::classes::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling
