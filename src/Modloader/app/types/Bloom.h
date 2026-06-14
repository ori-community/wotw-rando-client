#pragma once
#include <Modloader/app/structs/Bloom.h>
#include <Modloader/app/structs/Bloom__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Bloom {
        inline app::Bloom__Class** type_info() {
            static app::Bloom__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Bloom__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Bloom__Class* get_class() {
            return il2cpp::get_class<app::Bloom__Class>(type_info(), "UnityStandardAssets.ImageEffects", "Bloom");
        }
        inline app::Bloom* create() {
            return il2cpp::create_object<app::Bloom>(get_class());
        }
    } // namespace Bloom
} // namespace app::classes::types
