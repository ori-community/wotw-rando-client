#pragma once
#include <Modloader/app/structs/TrackingValidationObjectDictionary.h>
#include <Modloader/app/structs/TrackingValidationObjectDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrackingValidationObjectDictionary {
        inline app::TrackingValidationObjectDictionary__Class** type_info() {
            static app::TrackingValidationObjectDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TrackingValidationObjectDictionary__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TrackingValidationObjectDictionary__Class* get_class() {
            return il2cpp::get_class<app::TrackingValidationObjectDictionary__Class>(type_info(), "System.Net", "TrackingValidationObjectDictionary");
        }
        inline app::TrackingValidationObjectDictionary* create() {
            return il2cpp::create_object<app::TrackingValidationObjectDictionary>(get_class());
        }
    } // namespace TrackingValidationObjectDictionary
} // namespace app::classes::types
