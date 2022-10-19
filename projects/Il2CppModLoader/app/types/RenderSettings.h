#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderSettings {
        namespace {
            inline app::RenderSettings__Class* type_info_ref = nullptr;
        }
        inline app::RenderSettings__Class** type_info = &type_info_ref;
        inline app::RenderSettings__Class* get_class() {
            return il2cpp::get_class<app::RenderSettings__Class>(type_info, "UnityEngine", "RenderSettings");
        }
        inline app::RenderSettings* create() {
            return il2cpp::create_object<app::RenderSettings>(get_class());
        }
    } // namespace RenderSettings
} // namespace app::classes::types
