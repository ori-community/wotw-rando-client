#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TrackingValidationObjectDictionary_ValidateAndParseValue__Class.h>
#include <Modloader/app/structs/TrackingValidationObjectDictionary_ValidateAndParseValue.h>

namespace app::classes::types {
    namespace TrackingValidationObjectDictionary_ValidateAndParseValue {
        namespace {
            inline app::TrackingValidationObjectDictionary_ValidateAndParseValue__Class* type_info_ref = nullptr;
        }
        inline app::TrackingValidationObjectDictionary_ValidateAndParseValue__Class** type_info = &type_info_ref;
        inline app::TrackingValidationObjectDictionary_ValidateAndParseValue__Class* get_class() {
            return il2cpp::get_nested_class<app::TrackingValidationObjectDictionary_ValidateAndParseValue__Class>(type_info, "System.Net", "TrackingValidationObjectDictionary", "ValidateAndParseValue");
        }
        inline app::TrackingValidationObjectDictionary_ValidateAndParseValue* create() {
            return il2cpp::create_object<app::TrackingValidationObjectDictionary_ValidateAndParseValue>(get_class());
        }
    } // namespace TrackingValidationObjectDictionary_ValidateAndParseValue
} // namespace app::classes::types
