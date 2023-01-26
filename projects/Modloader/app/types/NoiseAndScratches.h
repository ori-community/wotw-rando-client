#pragma once
#include <Modloader/app/structs/NoiseAndScratches.h>
#include <Modloader/app/structs/NoiseAndScratches__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NoiseAndScratches {
        inline app::NoiseAndScratches__Class** type_info() {
            static app::NoiseAndScratches__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NoiseAndScratches__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NoiseAndScratches__Class* get_class() {
            return il2cpp::get_class<app::NoiseAndScratches__Class>(type_info(), "UnityStandardAssets.ImageEffects", "NoiseAndScratches");
        }
        inline app::NoiseAndScratches* create() {
            return il2cpp::create_object<app::NoiseAndScratches>(get_class());
        }
    } // namespace NoiseAndScratches
} // namespace app::classes::types
