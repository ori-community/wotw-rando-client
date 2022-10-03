#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SliceRenderSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SliceRenderSettings__Class** type_info;
        inline app::SliceRenderSettings__Class* get_class() {
            return il2cpp::get_class<app::SliceRenderSettings__Class>(type_info, "Moon.Rendering", "SliceRenderSettings");
        }
        inline app::SliceRenderSettings* create() {
            return il2cpp::create_object<app::SliceRenderSettings>(get_class());
        }
    } // namespace SliceRenderSettings
} // namespace app::classes::types
