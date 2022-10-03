#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterFallMask__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaterFallMask__Array__Class** type_info;
        inline app::WaterFallMask__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterFallMask__Array__Class>(type_info, "Moon", "WaterFallMask[]");
        }
        inline app::WaterFallMask__Array* create() {
            return il2cpp::create_object<app::WaterFallMask__Array>(get_class());
        }
    } // namespace WaterFallMask__Array
} // namespace app::classes::types
