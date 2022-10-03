#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BugHornEntity_HornSettings {
        namespace {
            app::BugHornEntity_HornSettings__Class* type_info_ref = nullptr;
        }
        app::BugHornEntity_HornSettings__Class** type_info = &type_info_ref;
        inline app::BugHornEntity_HornSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::BugHornEntity_HornSettings__Class>(type_info, "", "BugHornEntity", "HornSettings");
        }
        inline app::BugHornEntity_HornSettings* create() {
            return il2cpp::create_object<app::BugHornEntity_HornSettings>(get_class());
        }
        inline app::BugHornEntity_HornSettings__Boxed* box(app::BugHornEntity_HornSettings value) {
            return il2cpp::box_value<app::BugHornEntity_HornSettings__Boxed>(get_class(), value);
        }
    } // namespace BugHornEntity_HornSettings
} // namespace app::classes::types
