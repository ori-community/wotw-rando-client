#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TypeConverter.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlAttributeCollection.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlElement.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/XMLSchema.h>

namespace app::classes::System::Data::XMLSchema {
    IL2CPP_REGISTER_METHOD(0x023D3700, app::TypeConverter*, GetConverter, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x023D37A0, void, SetProperties, (app::Object * instance, app::XmlAttributeCollection* attrs))
    IL2CPP_REGISTER_METHODINFO(0x047785D0, XMLSchema_SetProperties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023D3CC0, bool, FEqualIdentity, (app::XmlNode * node, app::String* name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x023D3D80, bool, GetBooleanAttribute, (app::XmlElement * element, app::String* attr_name, app::String* attr_n_s, bool def_val))
    IL2CPP_REGISTER_METHODINFO(0x0471E548, XMLSchema_GetBooleanAttribute__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023D3F30, app::String*, GenUniqueColumnName, (app::String * proposed_name, app::DataTable* table))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XMLSchema * this_ptr))
} // namespace app::classes::System::Data::XMLSchema
