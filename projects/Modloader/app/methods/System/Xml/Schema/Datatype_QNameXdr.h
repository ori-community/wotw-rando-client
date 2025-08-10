#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Datatype_QNameXdr.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>

namespace app::classes::System::Xml::Schema::Datatype_QNameXdr {
    IL2CPP_REGISTER_METHOD(0x008556D0, app::XmlTokenizedType__Enum, get_TokenizedType, app::Datatype_QNameXdr* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02357D00,
        app::Object*,
        ParseValue,
        app::Datatype_QNameXdr* this_ptr,
        app::String* s,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* nsmgr
    )
    IL2CPP_REGISTER_METHOD(0x02357F00, app::Type*, get_ValueType, app::Datatype_QNameXdr* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02357FA0, app::Type*, get_ListValueType, app::Datatype_QNameXdr* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02358040, void, ctor, app::Datatype_QNameXdr* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023580E0, void, cctor, )
} // namespace app::classes::System::Xml::Schema::Datatype_QNameXdr
