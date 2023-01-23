#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NfaContentValidator.h>
#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/BitSet__Array.h>
#include <Modloader/app/structs/SymbolsDictionary.h>
#include <Modloader/app/structs/Positions.h>
#include <Modloader/app/structs/XmlSchemaContentType__Enum.h>
#include <Modloader/app/structs/ValidationState.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/XmlSchemaSet.h>

namespace app::classes::System::Xml::Schema::NfaContentValidator {
    IL2CPP_REGISTER_METHOD(0x016D0120, void, ctor, (app::NfaContentValidator * this_ptr, app::BitSet* firstpos, app::BitSet__Array* followpos, app::SymbolsDictionary* symbols, app::Positions* positions, int32_t end_marker_pos, app::XmlSchemaContentType__Enum content_type, bool is_open, bool is_emptiable))
    IL2CPP_REGISTER_METHOD(0x016D0210, void, InitValidation, (app::NfaContentValidator * this_ptr, app::ValidationState* context))
    IL2CPP_REGISTER_METHOD(0x016D0470, app::Object*, ValidateElement, (app::NfaContentValidator * this_ptr, app::XmlQualifiedName* name, app::ValidationState* context, int32_t* error_code))
    IL2CPP_REGISTER_METHOD(0x016D0750, bool, CompleteValidation, (app::NfaContentValidator * this_ptr, app::ValidationState* context))
    IL2CPP_REGISTER_METHOD(0x016D0800, app::ArrayList*, ExpectedElements, (app::NfaContentValidator * this_ptr, app::ValidationState* context, bool is_required_only))
    IL2CPP_REGISTER_METHOD(0x016D0AE0, app::ArrayList*, ExpectedParticles, (app::NfaContentValidator * this_ptr, app::ValidationState* context, bool is_required_only, app::XmlSchemaSet* schema_set))
} // namespace app::classes::System::Xml::Schema::NfaContentValidator
