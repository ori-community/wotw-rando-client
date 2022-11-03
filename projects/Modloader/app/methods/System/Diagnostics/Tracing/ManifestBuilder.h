#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::ManifestBuilder {
    IL2CPP_REGISTER_METHOD(0x019FF750, void, ctor, (app::ManifestBuilder * this_ptr, app::String* provider_name, app::Guid provider_guid, app::String* dll_name, app::ResourceManager* resources, app::EventManifestOptions__Enum flags))
    IL2CPP_REGISTER_METHOD(0x01A000C0, void, AddOpcode, (app::ManifestBuilder * this_ptr, app::String* name, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01A004F0, void, AddTask, (app::ManifestBuilder * this_ptr, app::String* name, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01A009C0, void, AddKeyword, (app::ManifestBuilder * this_ptr, app::String* name, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x01A01180, void, StartEvent, (app::ManifestBuilder * this_ptr, app::String* event_name, app::EventAttribute* event_attribute))
    IL2CPP_REGISTER_METHOD(0x01A01630, void, AddEventParameter, (app::ManifestBuilder * this_ptr, app::Type* type, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01A01E70, void, EndEvent, (app::ManifestBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A02140, app::Byte__Array*, CreateManifest, (app::ManifestBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::IList_1_System_String_*, get_Errors, (app::ManifestBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A02180, void, ManifestError, (app::ManifestBuilder * this_ptr, app::String* msg, bool runtime_critical))
    IL2CPP_REGISTER_METHODINFO(0x04716DC8, ManifestBuilder_ManifestError__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A02270, app::String*, CreateManifestString, (app::ManifestBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A043B0, void, WriteNameAndMessageAttribs, (app::ManifestBuilder * this_ptr, app::StringBuilder* string_builder, app::String* element_name, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01A044C0, void, WriteMessageAttrib, (app::ManifestBuilder * this_ptr, app::StringBuilder* string_builder, app::String* element_name, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01A047B0, app::String*, GetLocalizedMessage, (app::ManifestBuilder * this_ptr, app::String* key, app::CultureInfo* ci, bool etw_format))
    IL2CPP_REGISTER_METHOD(0x01A04970, app::List_1_System_Globalization_CultureInfo_*, GetSupportedCultures, (app::ResourceManager * resources))
    IL2CPP_REGISTER_METHOD(0x01A04C40, app::String*, GetLevelName, (app::EventLevel__Enum level))
    IL2CPP_REGISTER_METHOD(0x01A04D10, app::String*, GetTaskName, (app::ManifestBuilder * this_ptr, app::EventTask__Enum task, app::String* event_name))
    IL2CPP_REGISTER_METHOD(0x01A04F70, app::String*, GetOpcodeName, (app::ManifestBuilder * this_ptr, app::EventOpcode__Enum opcode, app::String* event_name))
    IL2CPP_REGISTER_METHOD(0x01A05220, app::String*, GetKeywords, (app::ManifestBuilder * this_ptr, uint64_t keywords, app::String* event_name))
    IL2CPP_REGISTER_METHOD(0x01A05510, app::String*, GetTypeName, (app::ManifestBuilder * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01A05960, void, UpdateStringBuilder, (app::StringBuilder * *string_builder, app::String* event_message, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01A05B00, app::String*, TranslateToManifestConvention, (app::ManifestBuilder * this_ptr, app::String* event_message, app::String* evt_name))
    IL2CPP_REGISTER_METHOD(0x01A06A70, int32_t, TranslateIndexToManifestConvention, (app::ManifestBuilder * this_ptr, int32_t idx, app::String* evt_name))
} // namespace app::classes::System::Diagnostics::Tracing::ManifestBuilder
