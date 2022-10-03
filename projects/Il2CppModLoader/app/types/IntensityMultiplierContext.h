#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntensityMultiplierContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IntensityMultiplierContext__Class** type_info;
        inline app::IntensityMultiplierContext__Class* get_class() {
            return il2cpp::get_class<app::IntensityMultiplierContext__Class>(type_info, "Moon", "IntensityMultiplierContext");
        }
        inline app::IntensityMultiplierContext* create() {
            return il2cpp::create_object<app::IntensityMultiplierContext>(get_class());
        }
    } // namespace IntensityMultiplierContext
} // namespace app::classes::types
