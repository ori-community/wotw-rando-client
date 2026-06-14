#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumMap_EnumMapMember.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Serialization::EnumMap_EnumMapMember {
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, app::EnumMap_EnumMapMember* this_ptr, app::String* xml_name, app::String* enum_name, int64_t value)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_XmlName, app::EnumMap_EnumMapMember* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_EnumName, app::EnumMap_EnumMapMember* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_Value, app::EnumMap_EnumMapMember* this_ptr)
} // namespace app::classes::System::Xml::Serialization::EnumMap_EnumMapMember
