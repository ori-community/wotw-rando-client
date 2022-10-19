#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FilterRenderersSettings {
        namespace {
            inline app::FilterRenderersSettings__Class* type_info_ref = nullptr;
        }
        inline app::FilterRenderersSettings__Class** type_info = &type_info_ref;
        inline app::FilterRenderersSettings__Class* get_class() {
            return il2cpp::get_class<app::FilterRenderersSettings__Class>(type_info, "UnityEngine.Experimental.Rendering", "FilterRenderersSettings");
        }
        inline app::FilterRenderersSettings* create() {
            return il2cpp::create_object<app::FilterRenderersSettings>(get_class());
        }
        inline app::FilterRenderersSettings__Boxed* box(app::FilterRenderersSettings value) {
            return il2cpp::box_value<app::FilterRenderersSettings__Boxed>(get_class(), value);
        }
    } // namespace FilterRenderersSettings
} // namespace app::classes::types
