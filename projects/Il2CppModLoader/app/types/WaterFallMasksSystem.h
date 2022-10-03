#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterFallMasksSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaterFallMasksSystem__Class** type_info;
        inline app::WaterFallMasksSystem__Class* get_class() {
            return il2cpp::get_class<app::WaterFallMasksSystem__Class>(type_info, "Moon", "WaterFallMasksSystem");
        }
        inline app::WaterFallMasksSystem* create() {
            return il2cpp::create_object<app::WaterFallMasksSystem>(get_class());
        }
    } // namespace WaterFallMasksSystem
} // namespace app::classes::types
