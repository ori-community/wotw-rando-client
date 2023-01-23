#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SchemaEntity.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Schema::SchemaEntity {
    IL2CPP_REGISTER_METHOD(0x01AAFC40, void, ctor, (app::SchemaEntity * this_ptr, app::XmlQualifiedName* qname, bool is_parameter))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::String*, IDtdEntityInfo_get_Name, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DC0, bool, IDtdEntityInfo_get_IsExternal, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, IDtdEntityInfo_get_IsDeclaredInExternal, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AAFD10, bool, IDtdEntityInfo_get_IsUnparsedEntity, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, IDtdEntityInfo_get_IsParameterEntity, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AAFD60, app::String*, IDtdEntityInfo_get_BaseUriString, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AAFDF0, app::String*, IDtdEntityInfo_get_DeclaredUriString, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, IDtdEntityInfo_get_SystemId, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, IDtdEntityInfo_get_PublicId, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, IDtdEntityInfo_get_Text, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, IDtdEntityInfo_get_LineNumber, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, IDtdEntityInfo_get_LinePosition, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AAFE00, bool, IsPredefinedEntity, (app::String * n))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlQualifiedName*, get_Name, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Url, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AAFF80, void, set_Url, (app::SchemaEntity * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Pubid, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Pubid, (app::SchemaEntity * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_IsExternal, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C15D0, void, set_IsExternal, (app::SchemaEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, get_DeclaredInExternal, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1A3C0, void, set_DeclaredInExternal, (app::SchemaEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::XmlQualifiedName*, get_NData, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_NData, (app::SchemaEntity * this_ptr, app::XmlQualifiedName* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Text, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AAFF90, void, set_Text, (app::SchemaEntity * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_Line, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_Line, (app::SchemaEntity * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_Pos, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C5130, void, set_Pos, (app::SchemaEntity * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01AAFFA0, app::String*, get_BaseURI, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_BaseURI, (app::SchemaEntity * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00F3ABA0, bool, get_ParsingInProgress, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AB0030, void, set_ParsingInProgress, (app::SchemaEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01AB0040, app::String*, get_DeclaredURI, (app::SchemaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_DeclaredURI, (app::SchemaEntity * this_ptr, app::String* value))
} // namespace app::classes::System::Xml::Schema::SchemaEntity
