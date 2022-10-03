#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GraphicsSettings {
        namespace {
            app::GraphicsSettings__Class* type_info_ref = nullptr;
        }
        app::GraphicsSettings__Class** type_info = &type_info_ref;
        inline app::GraphicsSettings__Class* get_class() {
            return il2cpp::get_class<app::GraphicsSettings__Class>(type_info, "UnityEngine.Rendering", "GraphicsSettings");
        }
        inline app::GraphicsSettings* create() {
            return il2cpp::create_object<app::GraphicsSettings>(get_class());
        }
    } // namespace GraphicsSettings
} // namespace app::classes::types
