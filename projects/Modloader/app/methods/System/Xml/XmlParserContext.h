#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlParserContext.h>
#include <Modloader/app/structs/XmlSpace__Enum.h>

namespace app::classes::System::Xml::XmlParserContext {
    IL2CPP_REGISTER_METHOD(
        0x016FF100,
        void,
        ctor_1,
        app::XmlParserContext* this_ptr,
        app::XmlNameTable* nt,
        app::XmlNamespaceManager* ns_mgr,
        app::String* xml_lang,
        app::XmlSpace__Enum xml_space
    )
    IL2CPP_REGISTER_METHOD(
        0x016FF200,
        void,
        ctor_2,
        app::XmlParserContext* this_ptr,
        app::XmlNameTable* nt,
        app::XmlNamespaceManager* ns_mgr,
        app::String* doc_type_name,
        app::String* pub_id,
        app::String* sys_id,
        app::String* internal_subset,
        app::String* base_u_r_i,
        app::String* xml_lang,
        app::XmlSpace__Enum xml_space
    )
    IL2CPP_REGISTER_METHOD(
        0x016FF270,
        void,
        ctor_3,
        app::XmlParserContext* this_ptr,
        app::XmlNameTable* nt,
        app::XmlNamespaceManager* ns_mgr,
        app::String* doc_type_name,
        app::String* pub_id,
        app::String* sys_id,
        app::String* internal_subset,
        app::String* base_u_r_i,
        app::String* xml_lang,
        app::XmlSpace__Enum xml_space,
        app::Encoding* enc
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlNameTable*, get_NameTable, app::XmlParserContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XmlNamespaceManager*, get_NamespaceManager, app::XmlParserContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_DocTypeName, app::XmlParserContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_PublicId, app::XmlParserContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_SystemId, app::XmlParserContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_BaseURI, app::XmlParserContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_InternalSubset, app::XmlParserContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_XmlLang, app::XmlParserContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006410F0, app::XmlSpace__Enum, get_XmlSpace, app::XmlParserContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::Encoding*, get_Encoding, app::XmlParserContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016FF4E0, bool, get_HasDtdInfo, app::XmlParserContext* this_ptr)
} // namespace app::classes::System::Xml::XmlParserContext
