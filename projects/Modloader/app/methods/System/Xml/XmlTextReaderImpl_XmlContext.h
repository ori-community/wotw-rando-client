#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlTextReaderImpl_XmlContext.h>

namespace app::classes::System::Xml::XmlTextReaderImpl_XmlContext {
    IL2CPP_REGISTER_METHOD(0x01FBCA00, void, ctor_1, app::XmlTextReaderImpl_XmlContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FBCAB0, void, ctor_2, app::XmlTextReaderImpl_XmlContext* this_ptr, app::XmlTextReaderImpl_XmlContext* previous_context)
} // namespace app::classes::System::Xml::XmlTextReaderImpl_XmlContext
