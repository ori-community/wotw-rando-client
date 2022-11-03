#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokTongueStatue_AdvancedKwolokTongueStatueSettings {
        namespace {
            inline app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class* type_info_ref = nullptr;
        }
        inline app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class** type_info = &type_info_ref;
        inline app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class>(type_info, "", "KwolokTongueStatue", "AdvancedKwolokTongueStatueSettings");
        }
        inline app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings* create() {
            return il2cpp::create_object<app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings>(get_class());
        }
    } // namespace KwolokTongueStatue_AdvancedKwolokTongueStatueSettings
} // namespace app::classes::types
