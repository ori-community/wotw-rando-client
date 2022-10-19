#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTweaks {
        namespace {
            inline app::MoonTweaks__Class* type_info_ref = nullptr;
        }
        inline app::MoonTweaks__Class** type_info = &type_info_ref;
        inline app::MoonTweaks__Class* get_class() {
            return il2cpp::get_class<app::MoonTweaks__Class>(type_info, "UnityEngine.Moon", "MoonTweaks");
        }
        inline app::MoonTweaks* create() {
            return il2cpp::create_object<app::MoonTweaks>(get_class());
        }
    } // namespace MoonTweaks
} // namespace app::classes::types
