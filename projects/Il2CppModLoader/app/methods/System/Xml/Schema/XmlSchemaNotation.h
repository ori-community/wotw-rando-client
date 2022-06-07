#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaNotation {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String *, get_Name, (app::XmlSchemaNotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Name, (app::XmlSchemaNotation * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String *, get_Public, (app::XmlSchemaNotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Public, (app::XmlSchemaNotation * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String *, get_System, (app::XmlSchemaNotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_System, (app::XmlSchemaNotation * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::XmlQualifiedName *, get_QualifiedName, (app::XmlSchemaNotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_QualifiedName, (app::XmlSchemaNotation * this_ptr, app::XmlQualifiedName * value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String *, get_NameAttribute, (app::XmlSchemaNotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_NameAttribute, (app::XmlSchemaNotation * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x01CB6570, void, ctor, (app::XmlSchemaNotation * this_ptr))
}
