#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AutoValidator.h>
#include <Modloader/app/structs/IValidationEventHandling.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValidationType__Enum.h>
#include <Modloader/app/structs/XmlSchemaCollection.h>
#include <Modloader/app/structs/XmlValidatingReaderImpl.h>

namespace app::classes::System::Xml::Schema::AutoValidator {
    IL2CPP_REGISTER_METHOD(
        0x019A2480,
        void,
        ctor,
        app::AutoValidator* this_ptr,
        app::XmlValidatingReaderImpl* reader,
        app::XmlSchemaCollection* schema_collection,
        app::IValidationEventHandling* event_handling
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_PreserveWhitespace, app::AutoValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019A25F0, void, Validate, app::AutoValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CompleteValidation, app::AutoValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, FindId, app::AutoValidator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x019A29F0, app::ValidationType__Enum, DetectValidationType, app::AutoValidator* this_ptr)
} // namespace app::classes::System::Xml::Schema::AutoValidator
