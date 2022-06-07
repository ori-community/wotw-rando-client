#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::DfaContentValidator {
    IL2CPP_REGISTER_METHOD(0x02364CC0, void, ctor, (app::DfaContentValidator * this_ptr, app::Int32__Array__Array * transition_table, app::SymbolsDictionary * symbols, app::XmlSchemaContentType__Enum content_type, bool is_open, bool is_emptiable))
    IL2CPP_REGISTER_METHOD(0x02364D90, void, InitValidation, (app::DfaContentValidator * this_ptr, app::ValidationState * context))
    IL2CPP_REGISTER_METHOD(0x02364E20, app::Object *, ValidateElement, (app::DfaContentValidator * this_ptr, app::XmlQualifiedName * name, app::ValidationState * context, int32_t * error_code))
    IL2CPP_REGISTER_METHOD(0x02364FF0, bool, CompleteValidation, (app::DfaContentValidator * this_ptr, app::ValidationState * context))
    IL2CPP_REGISTER_METHOD(0x02365010, app::ArrayList *, ExpectedElements, (app::DfaContentValidator * this_ptr, app::ValidationState * context, bool is_required_only))
    IL2CPP_REGISTER_METHOD(0x023652E0, app::ArrayList *, ExpectedParticles, (app::DfaContentValidator * this_ptr, app::ValidationState * context, bool is_required_only, app::XmlSchemaSet * schema_set))
}
