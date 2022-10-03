#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NoiseAndScratches {
        namespace {
            app::NoiseAndScratches__Class* type_info_ref = nullptr;
        }
        app::NoiseAndScratches__Class** type_info = &type_info_ref;
        inline app::NoiseAndScratches__Class* get_class() {
            return il2cpp::get_class<app::NoiseAndScratches__Class>(type_info, "UnityStandardAssets.ImageEffects", "NoiseAndScratches");
        }
        inline app::NoiseAndScratches* create() {
            return il2cpp::create_object<app::NoiseAndScratches>(get_class());
        }
    } // namespace NoiseAndScratches
} // namespace app::classes::types
