#pragma once
#include <Modloader/app/structs/BloomAndFlares.h>
#include <Modloader/app/structs/BloomAndFlares__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BloomAndFlares {
        inline app::BloomAndFlares__Class** type_info() {
            static app::BloomAndFlares__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BloomAndFlares__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BloomAndFlares__Class* get_class() {
            return il2cpp::get_class<app::BloomAndFlares__Class>(type_info(), "UnityStandardAssets.ImageEffects", "BloomAndFlares");
        }
        inline app::BloomAndFlares* create() {
            return il2cpp::create_object<app::BloomAndFlares>(get_class());
        }
    } // namespace BloomAndFlares
} // namespace app::classes::types
