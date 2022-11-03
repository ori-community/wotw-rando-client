#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::ContentValidator {
    IL2CPP_REGISTER_METHOD(0x0234D420, void, ctor_1, (app::ContentValidator * this_ptr, app::XmlSchemaContentType__Enum content_type))
    IL2CPP_REGISTER_METHOD(0x0234D430, void, ctor_2, (app::ContentValidator * this_ptr, app::XmlSchemaContentType__Enum content_type, bool is_open, bool is_emptiable))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::XmlSchemaContentType__Enum, get_ContentType, (app::ContentValidator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0234D440, bool, get_PreserveWhitespace, (app::ContentValidator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724AF0, bool, get_IsEmptiable, (app::ContentValidator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0234D460, bool, get_IsOpen, (app::ContentValidator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EA280, void, set_IsOpen, (app::ContentValidator * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitValidation, (app::ContentValidator * this_ptr, app::ValidationState* context))
    IL2CPP_REGISTER_METHOD(0x0234D470, app::Object*, ValidateElement, (app::ContentValidator * this_ptr, app::XmlQualifiedName* name, app::ValidationState* context, int32_t* error_code))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CompleteValidation, (app::ContentValidator * this_ptr, app::ValidationState* context))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ArrayList*, ExpectedElements, (app::ContentValidator * this_ptr, app::ValidationState* context, bool is_required_only))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ArrayList*, ExpectedParticles, (app::ContentValidator * this_ptr, app::ValidationState* context, bool is_required_only, app::XmlSchemaSet* schema_set))
    IL2CPP_REGISTER_METHOD(0x0234D4A0, void, AddParticleToExpected_1, (app::XmlSchemaParticle * p, app::XmlSchemaSet* schema_set, app::ArrayList* particles))
    IL2CPP_REGISTER_METHOD(0x0234D570, void, AddParticleToExpected_2, (app::XmlSchemaParticle * p, app::XmlSchemaSet* schema_set, app::ArrayList* particles, bool global))
    IL2CPP_REGISTER_METHOD(0x0234D870, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::ContentValidator
