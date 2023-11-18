#pragma once
#include <Modloader/app/structs/GraphicsSettings.h>
#include <Modloader/app/structs/GraphicsSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GraphicsSettings {
        inline app::GraphicsSettings__Class** type_info() {
            static app::GraphicsSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GraphicsSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GraphicsSettings__Class* get_class() {
            return il2cpp::get_class<app::GraphicsSettings__Class>(type_info(), "UnityEngine.Rendering", "GraphicsSettings");
        }
        inline app::GraphicsSettings* create() {
            return il2cpp::create_object<app::GraphicsSettings>(get_class());
        }
    } // namespace GraphicsSettings
} // namespace app::classes::types
