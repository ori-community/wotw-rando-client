#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PresetSaveComponentSettings {
        namespace {
            app::PresetSaveComponentSettings__Class* type_info_ref = nullptr;
        }
        app::PresetSaveComponentSettings__Class** type_info = &type_info_ref;
        inline app::PresetSaveComponentSettings__Class* get_class() {
            return il2cpp::get_class<app::PresetSaveComponentSettings__Class>(type_info, "", "PresetSaveComponentSettings");
        }
        inline app::PresetSaveComponentSettings* create() {
            return il2cpp::create_object<app::PresetSaveComponentSettings>(get_class());
        }
    } // namespace PresetSaveComponentSettings
} // namespace app::classes::types
