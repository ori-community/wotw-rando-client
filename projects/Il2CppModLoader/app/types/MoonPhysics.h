#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonPhysics {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonPhysics__Class** type_info;
        inline app::MoonPhysics__Class* get_class() {
            return il2cpp::get_class<app::MoonPhysics__Class>(type_info, "", "MoonPhysics");
        }
        inline app::MoonPhysics* create() {
            return il2cpp::create_object<app::MoonPhysics>(get_class());
        }
    } // namespace MoonPhysics
} // namespace app::classes::types
