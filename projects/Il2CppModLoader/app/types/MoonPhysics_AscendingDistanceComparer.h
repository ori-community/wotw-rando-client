#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonPhysics_AscendingDistanceComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonPhysics_AscendingDistanceComparer__Class** type_info;
        inline app::MoonPhysics_AscendingDistanceComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonPhysics_AscendingDistanceComparer__Class>(type_info, "", "MoonPhysics", "AscendingDistanceComparer");
        }
        inline app::MoonPhysics_AscendingDistanceComparer* create() {
            return il2cpp::create_object<app::MoonPhysics_AscendingDistanceComparer>(get_class());
        }
    } // namespace MoonPhysics_AscendingDistanceComparer
} // namespace app::classes::types
