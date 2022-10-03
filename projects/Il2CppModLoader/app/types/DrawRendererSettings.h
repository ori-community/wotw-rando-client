#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DrawRendererSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DrawRendererSettings__Class** type_info;
        inline app::DrawRendererSettings__Class* get_class() {
            return il2cpp::get_class<app::DrawRendererSettings__Class>(type_info, "UnityEngine.Experimental.Rendering", "DrawRendererSettings");
        }
        inline app::DrawRendererSettings* create() {
            return il2cpp::create_object<app::DrawRendererSettings>(get_class());
        }
        inline app::DrawRendererSettings__Boxed* box(app::DrawRendererSettings value) {
            return il2cpp::box_value<app::DrawRendererSettings__Boxed>(get_class(), value);
        }
    } // namespace DrawRendererSettings
} // namespace app::classes::types
