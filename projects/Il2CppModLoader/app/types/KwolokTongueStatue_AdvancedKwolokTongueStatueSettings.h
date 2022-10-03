#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokTongueStatue_AdvancedKwolokTongueStatueSettings {
        namespace {
            app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class* type_info_ref = nullptr;
        }
        app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class** type_info = &type_info_ref;
        inline app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class>(type_info, "", "KwolokTongueStatue", "AdvancedKwolokTongueStatueSettings");
        }
        inline app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings* create() {
            return il2cpp::create_object<app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings>(get_class());
        }
    } // namespace KwolokTongueStatue_AdvancedKwolokTongueStatueSettings
} // namespace app::classes::types
