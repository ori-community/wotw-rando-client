#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDtdInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XDocumentType.h>
#include <Modloader/app/structs/XNode.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::Linq::XDocumentType {
    IL2CPP_REGISTER_METHOD(
        0x03036150,
        void,
        ctor_1,
        app::XDocumentType* this_ptr,
        app::String* name,
        app::String* public_id,
        app::String* system_id,
        app::String* internal_subset
    )
    IL2CPP_REGISTER_METHOD(0x03036220, void, ctor_2, app::XDocumentType* this_ptr, app::XDocumentType* other)
    IL2CPP_REGISTER_METHOD(
        0x03036300,
        void,
        ctor_3,
        app::XDocumentType* this_ptr,
        app::String* name,
        app::String* public_id,
        app::String* system_id,
        app::String* internal_subset,
        app::IDtdInfo* dtd_info
    )
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_InternalSubset, app::XDocumentType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Name, app::XDocumentType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008556D0, app::XmlNodeType__Enum, get_NodeType, app::XDocumentType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_PublicId, app::XDocumentType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_SystemId, app::XDocumentType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03036330, void, WriteTo, app::XDocumentType* this_ptr, app::XmlWriter* writer)
    IL2CPP_REGISTER_METHOD(0x03036420, app::XNode*, CloneNode, app::XDocumentType* this_ptr)
} // namespace app::classes::System::Xml::Linq::XDocumentType
