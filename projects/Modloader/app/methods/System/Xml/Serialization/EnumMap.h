#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumMap.h>
#include <Modloader/app/structs/EnumMap_EnumMapMember__Array.h>
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Xml::Serialization::EnumMap {
    IL2CPP_REGISTER_METHOD(0x01C8D8C0, void, ctor, (app::EnumMap * this_ptr, app::EnumMap_EnumMapMember__Array* members, bool is_flags))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsFlags, (app::EnumMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String__Array*, get_EnumNames, (app::EnumMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String__Array*, get_XmlNames, (app::EnumMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Int64__Array*, get_Values, (app::EnumMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C8DB40, app::String*, GetXmlName, (app::EnumMap * this_ptr, app::String* type_name, app::Object* enum_value))
    IL2CPP_REGISTER_METHOD(0x01C8DEA0, app::String*, GetEnumName, (app::EnumMap * this_ptr, app::String* type_name, app::String* xml_name))
} // namespace app::classes::System::Xml::Serialization::EnumMap
