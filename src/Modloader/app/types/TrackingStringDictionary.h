#pragma once
#include <Modloader/app/structs/TrackingStringDictionary.h>
#include <Modloader/app/structs/TrackingStringDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrackingStringDictionary {
        inline app::TrackingStringDictionary__Class** type_info() {
            static app::TrackingStringDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TrackingStringDictionary__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TrackingStringDictionary__Class* get_class() {
            return il2cpp::get_class<app::TrackingStringDictionary__Class>(type_info(), "System.Net", "TrackingStringDictionary");
        }
        inline app::TrackingStringDictionary* create() {
            return il2cpp::create_object<app::TrackingStringDictionary>(get_class());
        }
    } // namespace TrackingStringDictionary
} // namespace app::classes::types
