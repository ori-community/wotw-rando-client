#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEnergy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinEnergy__Class** type_info;
        inline app::SeinEnergy__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergy__Class>(type_info, "", "SeinEnergy");
        }
        inline app::SeinEnergy* create() {
            return il2cpp::create_object<app::SeinEnergy>(get_class());
        }
    } // namespace SeinEnergy
} // namespace app::classes::types
