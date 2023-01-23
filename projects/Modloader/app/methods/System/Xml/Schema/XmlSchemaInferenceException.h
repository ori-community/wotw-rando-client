#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlSchemaInferenceException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Schema::XmlSchemaInferenceException {
    IL2CPP_REGISTER_METHOD(0x0191EC50, void, ctor_1, (app::XmlSchemaInferenceException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0191EC70, void, GetObjectData, (app::XmlSchemaInferenceException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0191EC90, void, ctor_2, (app::XmlSchemaInferenceException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CB6020, void, ctor_3, (app::XmlSchemaInferenceException * this_ptr, app::String* res, app::String* arg))
    IL2CPP_REGISTER_METHOD(0x01CB6180, void, ctor_4, (app::XmlSchemaInferenceException * this_ptr, app::String* res, int32_t line_number, int32_t line_position))
} // namespace app::classes::System::Xml::Schema::XmlSchemaInferenceException
