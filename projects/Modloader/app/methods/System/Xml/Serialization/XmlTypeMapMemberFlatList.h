#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMap.h>
#include <Modloader/app/structs/XmlTypeMapMemberFlatList.h>

namespace app::classes::System::Xml::Serialization::XmlTypeMapMemberFlatList {
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::ListMap*, get_ListMap, app::XmlTypeMapMemberFlatList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_ListMap, app::XmlTypeMapMemberFlatList* this_ptr, app::ListMap* value)
    IL2CPP_REGISTER_METHOD(0x0194ED90, void, ctor, app::XmlTypeMapMemberFlatList* this_ptr)
} // namespace app::classes::System::Xml::Serialization::XmlTypeMapMemberFlatList
