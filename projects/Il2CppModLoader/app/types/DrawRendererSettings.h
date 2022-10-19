#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DrawRendererSettings {
        inline app::DrawRendererSettings__Class** type_info = (app::DrawRendererSettings__Class**)(modloader::win::memory::resolve_rva(0x04722E80));
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
