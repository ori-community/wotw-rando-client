#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaImport {
    IL2CPP_REGISTER_METHOD(0x01CA9660, void, ctor, (app::XmlSchemaImport * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::String *, get_Namespace, (app::XmlSchemaImport * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_Namespace, (app::XmlSchemaImport * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, AddAnnotation, (app::XmlSchemaImport * this_ptr, app::XmlSchemaAnnotation * annotation))
}
