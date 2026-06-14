#pragma once
#include <Modloader/app/structs/RenderSettings.h>
#include <Modloader/app/structs/RenderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderSettings {
        inline app::RenderSettings__Class** type_info() {
            static app::RenderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RenderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RenderSettings__Class* get_class() {
            return il2cpp::get_class<app::RenderSettings__Class>(type_info(), "UnityEngine", "RenderSettings");
        }
        inline app::RenderSettings* create() {
            return il2cpp::create_object<app::RenderSettings>(get_class());
        }
    } // namespace RenderSettings
} // namespace app::classes::types
