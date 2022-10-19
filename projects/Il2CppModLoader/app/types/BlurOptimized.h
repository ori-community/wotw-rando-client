#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlurOptimized {
        namespace {
            inline app::BlurOptimized__Class* type_info_ref = nullptr;
        }
        inline app::BlurOptimized__Class** type_info = &type_info_ref;
        inline app::BlurOptimized__Class* get_class() {
            return il2cpp::get_class<app::BlurOptimized__Class>(type_info, "UnityStandardAssets.ImageEffects", "BlurOptimized");
        }
        inline app::BlurOptimized* create() {
            return il2cpp::create_object<app::BlurOptimized>(get_class());
        }
    } // namespace BlurOptimized
} // namespace app::classes::types
