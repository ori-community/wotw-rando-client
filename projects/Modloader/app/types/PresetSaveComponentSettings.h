#pragma once
#include <Modloader/app/structs/PresetSaveComponentSettings.h>
#include <Modloader/app/structs/PresetSaveComponentSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PresetSaveComponentSettings {
        inline app::PresetSaveComponentSettings__Class** type_info() {
            static app::PresetSaveComponentSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PresetSaveComponentSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PresetSaveComponentSettings__Class* get_class() {
            return il2cpp::get_class<app::PresetSaveComponentSettings__Class>(type_info(), "", "PresetSaveComponentSettings");
        }
        inline app::PresetSaveComponentSettings* create() {
            return il2cpp::create_object<app::PresetSaveComponentSettings>(get_class());
        }
    } // namespace PresetSaveComponentSettings
} // namespace app::classes::types
