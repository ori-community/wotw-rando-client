#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::AllElementsContentValidator {
    IL2CPP_REGISTER_METHOD(0x019A0650, void, ctor, (app::AllElementsContentValidator * this_ptr, app::XmlSchemaContentType__Enum content_type, int32_t size, bool is_emptiable))
    IL2CPP_REGISTER_METHOD(0x019A08C0, bool, AddElement, (app::AllElementsContentValidator * this_ptr, app::XmlQualifiedName* name, app::Object* particle, bool is_emptiable))
    IL2CPP_REGISTER_METHOD(0x019A0A80, bool, get_IsEmptiable, (app::AllElementsContentValidator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A0AA0, void, InitValidation, (app::AllElementsContentValidator * this_ptr, app::ValidationState* context))
    IL2CPP_REGISTER_METHOD(0x019A0C30, app::Object*, ValidateElement, (app::AllElementsContentValidator * this_ptr, app::XmlQualifiedName* name, app::ValidationState* context, int32_t* error_code))
    IL2CPP_REGISTER_METHOD(0x019A0E30, bool, CompleteValidation, (app::AllElementsContentValidator * this_ptr, app::ValidationState* context))
    IL2CPP_REGISTER_METHOD(0x019A0E80, app::ArrayList*, ExpectedElements, (app::AllElementsContentValidator * this_ptr, app::ValidationState* context, bool is_required_only))
    IL2CPP_REGISTER_METHOD(0x019A12B0, app::ArrayList*, ExpectedParticles, (app::AllElementsContentValidator * this_ptr, app::ValidationState* context, bool is_required_only, app::XmlSchemaSet* schema_set))
} // namespace app::classes::System::Xml::Schema::AllElementsContentValidator
