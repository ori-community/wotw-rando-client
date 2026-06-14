#pragma once
#include <Modloader/app/structs/QualitySettings.h>
#include <Modloader/app/structs/QualitySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QualitySettings {
        inline app::QualitySettings__Class** type_info() {
            static app::QualitySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QualitySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QualitySettings__Class* get_class() {
            return il2cpp::get_class<app::QualitySettings__Class>(type_info(), "UnityEngine", "QualitySettings");
        }
        inline app::QualitySettings* create() {
            return il2cpp::create_object<app::QualitySettings>(get_class());
        }
    } // namespace QualitySettings
} // namespace app::classes::types
