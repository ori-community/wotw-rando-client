#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Antialiasing {
        namespace {
            inline app::Antialiasing__Class* type_info_ref = nullptr;
        }
        inline app::Antialiasing__Class** type_info = &type_info_ref;
        inline app::Antialiasing__Class* get_class() {
            return il2cpp::get_class<app::Antialiasing__Class>(type_info, "UnityStandardAssets.ImageEffects", "Antialiasing");
        }
        inline app::Antialiasing* create() {
            return il2cpp::create_object<app::Antialiasing>(get_class());
        }
    } // namespace Antialiasing
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AntiAliasing {
        namespace {
            inline app::AntiAliasing__Class* type_info_ref = nullptr;
        }
        inline app::AntiAliasing__Class** type_info = &type_info_ref;
        inline app::AntiAliasing__Class* get_class() {
            return il2cpp::get_class<app::AntiAliasing__Class>(type_info, "UnityStandardAssets.CinematicEffects", "AntiAliasing");
        }
        inline app::AntiAliasing* create() {
            return il2cpp::create_object<app::AntiAliasing>(get_class());
        }
    } // namespace AntiAliasing
} // namespace app::classes::types
