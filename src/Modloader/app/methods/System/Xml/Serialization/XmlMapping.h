#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/ObjectMap_1.h>
#include <Modloader/app/structs/SerializationFormat__Enum.h>
#include <Modloader/app/structs/SerializationSource.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlMapping.h>

namespace app::classes::System::Xml::Serialization::XmlMapping {
    IL2CPP_REGISTER_METHOD(0x00D09510, void, ctor, app::XmlMapping* this_ptr, app::String* element_name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_ElementName, app::XmlMapping* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_Namespace, app::XmlMapping* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, SetKey, app::XmlMapping* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::ObjectMap_1*, get_ObjectMap, app::XmlMapping* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ObjectMap, app::XmlMapping* this_ptr, app::ObjectMap_1* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ArrayList*, get_RelatedMaps, app::XmlMapping* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_RelatedMaps, app::XmlMapping* this_ptr, app::ArrayList* value)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::SerializationFormat__Enum, get_Format, app::XmlMapping* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Format, app::XmlMapping* this_ptr, app::SerializationFormat__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::SerializationSource*, get_Source, app::XmlMapping* this_ptr)
} // namespace app::classes::System::Xml::Serialization::XmlMapping
