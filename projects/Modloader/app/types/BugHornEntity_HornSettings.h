#pragma once
#include <Modloader/app/structs/BugHornEntity_HornSettings.h>
#include <Modloader/app/structs/BugHornEntity_HornSettings__Boxed.h>
#include <Modloader/app/structs/BugHornEntity_HornSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BugHornEntity_HornSettings {
        inline app::BugHornEntity_HornSettings__Class** type_info() {
            static app::BugHornEntity_HornSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BugHornEntity_HornSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BugHornEntity_HornSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::BugHornEntity_HornSettings__Class>(type_info(), "", "BugHornEntity", "HornSettings");
        }
        inline app::BugHornEntity_HornSettings* create() {
            return il2cpp::create_object<app::BugHornEntity_HornSettings>(get_class());
        }
        inline app::BugHornEntity_HornSettings__Boxed* box(app::BugHornEntity_HornSettings value) {
            return il2cpp::box_value<app::BugHornEntity_HornSettings__Boxed>(get_class(), value);
        }
    } // namespace BugHornEntity_HornSettings
} // namespace app::classes::types
