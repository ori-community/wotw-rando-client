#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::XmlTypeMapping {
    IL2CPP_REGISTER_METHOD(0x0194FA20, void, ctor, (app::XmlTypeMapping * this_ptr, app::String* element_name, app::String* ns, app::TypeData* type_data, app::String* xml_type, app::String* xml_type_namespace))
    IL2CPP_REGISTER_METHOD(0x0194FBB0, app::String*, get_TypeFullName, (app::XmlTypeMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::TypeData*, get_TypeData, (app::XmlTypeMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_XmlType, (app::XmlTypeMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_XmlType, (app::XmlTypeMapping * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0194FBD0, app::String*, get_XmlTypeNamespace, (app::XmlTypeMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_XmlTypeNamespace, (app::XmlTypeMapping * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0194FC60, bool, get_HasXmlTypeNamespace, (app::XmlTypeMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::ArrayList*, get_DerivedTypes, (app::XmlTypeMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_MultiReferenceType, (app::XmlTypeMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlTypeMapping*, get_BaseMap, (app::XmlTypeMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_BaseMap, (app::XmlTypeMapping * this_ptr, app::XmlTypeMapping* value))
    IL2CPP_REGISTER_METHOD(0x00675C70, void, set_IncludeInSchema, (app::XmlTypeMapping * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008543B0, bool, get_IsNullable, (app::XmlTypeMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC31D0, void, set_IsNullable, (app::XmlTypeMapping * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0194FC70, bool, get_IsAny, (app::XmlTypeMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194FC80, void, set_IsAny, (app::XmlTypeMapping * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0194FC90, app::XmlTypeMapping*, GetRealTypeMap, (app::XmlTypeMapping * this_ptr, app::Type* object_type))
    IL2CPP_REGISTER_METHOD(0x0194FE50, app::XmlTypeMapping*, GetRealElementMap, (app::XmlTypeMapping * this_ptr, app::String* name, app::String* ens))
    IL2CPP_REGISTER_METHOD(0x01950110, void, UpdateRoot, (app::XmlTypeMapping * this_ptr, app::XmlQualifiedName* qname))
} // namespace app::classes::System::Xml::Serialization::XmlTypeMapping
