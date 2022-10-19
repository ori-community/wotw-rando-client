#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TrackingValidationObjectDictionary {
        namespace {
            inline app::TrackingValidationObjectDictionary__Class* type_info_ref = nullptr;
        }
        inline app::TrackingValidationObjectDictionary__Class** type_info = &type_info_ref;
        inline app::TrackingValidationObjectDictionary__Class* get_class() {
            return il2cpp::get_class<app::TrackingValidationObjectDictionary__Class>(type_info, "System.Net", "TrackingValidationObjectDictionary");
        }
        inline app::TrackingValidationObjectDictionary* create() {
            return il2cpp::create_object<app::TrackingValidationObjectDictionary>(get_class());
        }
    } // namespace TrackingValidationObjectDictionary
} // namespace app::classes::types
