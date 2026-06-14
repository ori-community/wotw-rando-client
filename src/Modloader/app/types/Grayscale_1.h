#pragma once
#include <Modloader/app/structs/Grayscale_1.h>
#include <Modloader/app/structs/Grayscale_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Grayscale_1 {
        inline app::Grayscale_1__Class** type_info() {
            static app::Grayscale_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Grayscale_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Grayscale_1__Class* get_class() {
            return il2cpp::get_class<app::Grayscale_1__Class>(type_info(), "UnityStandardAssets.ImageEffects", "Grayscale");
        }
        inline app::Grayscale_1* create() {
            return il2cpp::create_object<app::Grayscale_1>(get_class());
        }
    } // namespace Grayscale_1
} // namespace app::classes::types
