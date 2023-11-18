#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DfaContentValidator.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Int32__Array__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SymbolsDictionary.h>
#include <Modloader/app/structs/ValidationState.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaContentType__Enum.h>
#include <Modloader/app/structs/XmlSchemaSet.h>

namespace app::classes::System::Xml::Schema::DfaContentValidator {
    IL2CPP_REGISTER_METHOD(0x02364CC0, void, ctor, (app::DfaContentValidator * this_ptr, app::Int32__Array__Array* transition_table, app::SymbolsDictionary* symbols, app::XmlSchemaContentType__Enum content_type, bool is_open, bool is_emptiable))
    IL2CPP_REGISTER_METHOD(0x02364D90, void, InitValidation, (app::DfaContentValidator * this_ptr, app::ValidationState* context))
    IL2CPP_REGISTER_METHOD(0x02364E20, app::Object*, ValidateElement, (app::DfaContentValidator * this_ptr, app::XmlQualifiedName* name, app::ValidationState* context, int32_t* error_code))
    IL2CPP_REGISTER_METHOD(0x02364FF0, bool, CompleteValidation, (app::DfaContentValidator * this_ptr, app::ValidationState* context))
    IL2CPP_REGISTER_METHOD(0x02365010, app::ArrayList*, ExpectedElements, (app::DfaContentValidator * this_ptr, app::ValidationState* context, bool is_required_only))
    IL2CPP_REGISTER_METHOD(0x023652E0, app::ArrayList*, ExpectedParticles, (app::DfaContentValidator * this_ptr, app::ValidationState* context, bool is_required_only, app::XmlSchemaSet* schema_set))
} // namespace app::classes::System::Xml::Schema::DfaContentValidator
