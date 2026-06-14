#pragma once
#include <Modloader/app/structs/MoonTweaks.h>
#include <Modloader/app/structs/MoonTweaks__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTweaks {
        inline app::MoonTweaks__Class** type_info() {
            static app::MoonTweaks__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTweaks__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTweaks__Class* get_class() {
            return il2cpp::get_class<app::MoonTweaks__Class>(type_info(), "UnityEngine.Moon", "MoonTweaks");
        }
        inline app::MoonTweaks* create() {
            return il2cpp::create_object<app::MoonTweaks>(get_class());
        }
    } // namespace MoonTweaks
} // namespace app::classes::types
