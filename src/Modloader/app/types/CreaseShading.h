#pragma once
#include <Modloader/app/structs/CreaseShading.h>
#include <Modloader/app/structs/CreaseShading__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreaseShading {
        inline app::CreaseShading__Class** type_info() {
            static app::CreaseShading__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CreaseShading__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CreaseShading__Class* get_class() {
            return il2cpp::get_class<app::CreaseShading__Class>(type_info(), "UnityStandardAssets.ImageEffects", "CreaseShading");
        }
        inline app::CreaseShading* create() {
            return il2cpp::create_object<app::CreaseShading>(get_class());
        }
    } // namespace CreaseShading
} // namespace app::classes::types
