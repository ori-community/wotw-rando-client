#pragma once
#include <Modloader/app/structs/KwolokTongueStatue_AdvancedKwolokTongueStatueSettings.h>
#include <Modloader/app/structs/KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokTongueStatue_AdvancedKwolokTongueStatueSettings {
        inline app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class** type_info() {
            static app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class>(type_info(), "", "KwolokTongueStatue", "AdvancedKwolokTongueStatueSettings");
        }
        inline app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings* create() {
            return il2cpp::create_object<app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings>(get_class());
        }
    } // namespace KwolokTongueStatue_AdvancedKwolokTongueStatueSettings
} // namespace app::classes::types
