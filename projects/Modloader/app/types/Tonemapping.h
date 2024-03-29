#pragma once
#include <Modloader/app/structs/Tonemapping.h>
#include <Modloader/app/structs/Tonemapping__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tonemapping {
        inline app::Tonemapping__Class** type_info() {
            static app::Tonemapping__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Tonemapping__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Tonemapping__Class* get_class() {
            return il2cpp::get_class<app::Tonemapping__Class>(type_info(), "UnityStandardAssets.ImageEffects", "Tonemapping");
        }
        inline app::Tonemapping* create() {
            return il2cpp::create_object<app::Tonemapping>(get_class());
        }
    } // namespace Tonemapping
} // namespace app::classes::types
