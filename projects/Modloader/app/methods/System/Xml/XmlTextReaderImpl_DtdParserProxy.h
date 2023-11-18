#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlTextReaderImpl_DtdParserProxy.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IDtdEntityInfo.h>
#include <Modloader/app/structs/IValidationEventHandling.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/LineInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlTextReaderImpl.h>

namespace app::classes::System::Xml::XmlTextReaderImpl_DtdParserProxy {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, app::XmlTextReaderImpl* reader))
    IL2CPP_REGISTER_METHOD(0x01FBB230, app::XmlNameTable*, IDtdParserAdapter_get_NameTable, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBB250, app::IXmlNamespaceResolver*, IDtdParserAdapter_get_NamespaceResolver, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBB270, app::Uri*, IDtdParserAdapter_get_BaseUri, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBB370, bool, IDtdParserAdapter_get_IsEof, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A88520, app::Char__Array*, IDtdParserAdapter_get_ParsingBuffer, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBB390, int32_t, IDtdParserAdapter_get_ParsingBufferLength, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBB3B0, int32_t, IDtdParserAdapter_get_CurrentPosition, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBB3D0, void, IDtdParserAdapter_set_CurrentPosition, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01FBB3F0, int32_t, IDtdParserAdapter_get_EntityStackLength, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBB410, bool, IDtdParserAdapter_get_IsEntityEolNormalized, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBB430, void, IDtdParserAdapter_OnNewLine, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, int32_t pos))
    IL2CPP_REGISTER_METHOD(0x01FBB460, int32_t, IDtdParserAdapter_get_LineNo, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBB480, int32_t, IDtdParserAdapter_get_LineStartPosition, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBB4A0, int32_t, IDtdParserAdapter_ReadData, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBB4C0, int32_t, IDtdParserAdapter_ParseNumericCharRef, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, app::StringBuilder* internal_subset_builder))
    IL2CPP_REGISTER_METHOD(0x01FBB500, int32_t, IDtdParserAdapter_ParseNamedCharRef, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, bool expand, app::StringBuilder* internal_subset_builder))
    IL2CPP_REGISTER_METHOD(0x01FBB520, void, IDtdParserAdapter_ParsePI, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x01FBB580, void, IDtdParserAdapter_ParseComment, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x01FBB5A0, bool, IDtdParserAdapter_PushEntity, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, app::IDtdEntityInfo* entity, int32_t* entity_id))
    IL2CPP_REGISTER_METHOD(0x01FBB6D0, bool, IDtdParserAdapter_PopEntity, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, app::IDtdEntityInfo** old_entity, int32_t* new_entity_id))
    IL2CPP_REGISTER_METHOD(0x01FBB740, bool, IDtdParserAdapter_PushExternalSubset, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, app::String* system_id, app::String* public_id))
    IL2CPP_REGISTER_METHOD(0x01FBB8C0, void, IDtdParserAdapter_PushInternalDtd, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, app::String* base_uri, app::String* internal_dtd))
    IL2CPP_REGISTER_METHOD(0x01FBB960, void, IDtdParserAdapter_Throw, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, app::Exception* e))
    IL2CPP_REGISTER_METHOD(0x01FBB990, void, IDtdParserAdapter_OnSystemId, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, app::String* system_id, app::LineInfo keyword_line_info, app::LineInfo system_literal_line_info))
    IL2CPP_REGISTER_METHOD(0x01FBBA70, void, IDtdParserAdapter_OnPublicId, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr, app::String* public_id, app::LineInfo keyword_line_info, app::LineInfo public_literal_line_info))
    IL2CPP_REGISTER_METHOD(0x01FBBB50, bool, IDtdParserAdapterWithValidation_get_DtdValidation, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBBB80, app::IValidationEventHandling*, IDtdParserAdapterWithValidation_get_ValidationEventHandling, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017176B0, bool, IDtdParserAdapterV1_get_Normalization, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717690, bool, IDtdParserAdapterV1_get_Namespaces, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBBBA0, bool, IDtdParserAdapterV1_get_V1CompatibilityMode, (app::XmlTextReaderImpl_DtdParserProxy * this_ptr))
} // namespace app::classes::System::Xml::XmlTextReaderImpl_DtdParserProxy
