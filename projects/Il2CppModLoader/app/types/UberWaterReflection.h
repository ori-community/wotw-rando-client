#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberWaterReflection__Class** type_info;
        inline app::UberWaterReflection__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflection__Class>(type_info, "", "UberWaterReflection");
        }
        inline app::UberWaterReflection* create() {
            return il2cpp::create_object<app::UberWaterReflection>(get_class());
        }
    } // namespace UberWaterReflection
} // namespace app::classes::types
