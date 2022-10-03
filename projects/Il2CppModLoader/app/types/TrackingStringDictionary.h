#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrackingStringDictionary {
        namespace {
            app::TrackingStringDictionary__Class* type_info_ref = nullptr;
        }
        app::TrackingStringDictionary__Class** type_info = &type_info_ref;
        inline app::TrackingStringDictionary__Class* get_class() {
            return il2cpp::get_class<app::TrackingStringDictionary__Class>(type_info, "System.Net", "TrackingStringDictionary");
        }
        inline app::TrackingStringDictionary* create() {
            return il2cpp::create_object<app::TrackingStringDictionary>(get_class());
        }
    } // namespace TrackingStringDictionary
} // namespace app::classes::types
