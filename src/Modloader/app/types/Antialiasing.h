#pragma once
#include <Modloader/app/structs/Antialiasing.h>
#include <Modloader/app/structs/Antialiasing__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Antialiasing {
        inline app::Antialiasing__Class** type_info() {
            static app::Antialiasing__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Antialiasing__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Antialiasing__Class* get_class() {
            return il2cpp::get_class<app::Antialiasing__Class>(type_info(), "UnityStandardAssets.ImageEffects", "Antialiasing");
        }
        inline app::Antialiasing* create() {
            return il2cpp::create_object<app::Antialiasing>(get_class());
        }
    } // namespace Antialiasing
} // namespace app::classes::types
#pragma once
#include <Modloader/app/structs/AntiAliasing.h>
#include <Modloader/app/structs/AntiAliasing__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AntiAliasing {
        inline app::AntiAliasing__Class** type_info() {
            static app::AntiAliasing__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AntiAliasing__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AntiAliasing__Class* get_class() {
            return il2cpp::get_class<app::AntiAliasing__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "AntiAliasing");
        }
        inline app::AntiAliasing* create() {
            return il2cpp::create_object<app::AntiAliasing>(get_class());
        }
    } // namespace AntiAliasing
} // namespace app::classes::types
