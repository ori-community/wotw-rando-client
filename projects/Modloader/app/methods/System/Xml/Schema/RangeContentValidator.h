#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/BitSet__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Positions.h>
#include <Modloader/app/structs/RangeContentValidator.h>
#include <Modloader/app/structs/SymbolsDictionary.h>
#include <Modloader/app/structs/ValidationState.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaContentType__Enum.h>
#include <Modloader/app/structs/XmlSchemaSet.h>

namespace app::classes::System::Xml::Schema::RangeContentValidator {
    IL2CPP_REGISTER_METHOD(
        0x016E5D30,
        void,
        ctor,
        app::RangeContentValidator* this_ptr,
        app::BitSet* firstpos,
        app::BitSet__Array* followpos,
        app::SymbolsDictionary* symbols,
        app::Positions* positions,
        int32_t end_marker_pos,
        app::XmlSchemaContentType__Enum content_type,
        bool is_emptiable,
        app::BitSet* positions_with_range_terminals,
        int32_t minmax_nodes_count
    )
    IL2CPP_REGISTER_METHOD(0x016E5E30, void, InitValidation, app::RangeContentValidator* this_ptr, app::ValidationState* context)
    IL2CPP_REGISTER_METHOD(
        0x016E61F0,
        app::Object*,
        ValidateElement,
        app::RangeContentValidator* this_ptr,
        app::XmlQualifiedName* name,
        app::ValidationState* context,
        int32_t* error_code
    )
    IL2CPP_REGISTER_METHOD(0x016E6DF0, bool, CompleteValidation, app::RangeContentValidator* this_ptr, app::ValidationState* context)
    IL2CPP_REGISTER_METHOD(
        0x016E6E10,
        app::ArrayList*,
        ExpectedElements,
        app::RangeContentValidator* this_ptr,
        app::ValidationState* context,
        bool is_required_only
    )
    IL2CPP_REGISTER_METHOD(
        0x016E7270,
        app::ArrayList*,
        ExpectedParticles,
        app::RangeContentValidator* this_ptr,
        app::ValidationState* context,
        bool is_required_only,
        app::XmlSchemaSet* schema_set
    )
} // namespace app::classes::System::Xml::Schema::RangeContentValidator
