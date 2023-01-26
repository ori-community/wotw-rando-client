#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSqlBinaryReader_AttrInfo__Boxed.h>
#include <Modloader/app/structs/SecureStringHasher.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_QName.h>

namespace app::classes::System::Xml::XmlSqlBinaryReader_AttrInfo {
    IL2CPP_REGISTER_METHOD(0x0013C710, void, Set_1, (app::XmlSqlBinaryReader_AttrInfo__Boxed * this_ptr, app::XmlSqlBinaryReader_QName n, app::String* v))
    IL2CPP_REGISTER_METHOD(0x0013C730, void, Set_2, (app::XmlSqlBinaryReader_AttrInfo__Boxed * this_ptr, app::XmlSqlBinaryReader_QName n, int32_t pos))
    IL2CPP_REGISTER_METHOD(0x0013C750, void, GetLocalnameAndNamespaceUri, (app::XmlSqlBinaryReader_AttrInfo__Boxed * this_ptr, app::String** localname, app::String** namespace_uri))
    IL2CPP_REGISTER_METHOD(0x0013C760, int32_t, GetLocalnameAndNamespaceUriAndHash, (app::XmlSqlBinaryReader_AttrInfo__Boxed * this_ptr, app::SecureStringHasher* hasher, app::String** localname, app::String** namespace_uri))
    IL2CPP_REGISTER_METHOD(0x0013C7D0, bool, MatchNS, (app::XmlSqlBinaryReader_AttrInfo__Boxed * this_ptr, app::String* localname, app::String* namespace_uri))
    IL2CPP_REGISTER_METHOD(0x0013C7E0, bool, MatchHashNS, (app::XmlSqlBinaryReader_AttrInfo__Boxed * this_ptr, int32_t hash, app::String* localname, app::String* namespace_uri))
    IL2CPP_REGISTER_METHOD(0x0013C800, void, AdjustPosition, (app::XmlSqlBinaryReader_AttrInfo__Boxed * this_ptr, int32_t adj))
} // namespace app::classes::System::Xml::XmlSqlBinaryReader_AttrInfo
