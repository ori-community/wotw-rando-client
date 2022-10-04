#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVitalsDeathListener {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVitalsDeathListener__Class** type_info;
        inline app::IVitalsDeathListener__Class* get_class() {
            return il2cpp::get_class<app::IVitalsDeathListener__Class>(type_info, "Moon", "IVitalsDeathListener");
        }
        inline app::IVitalsDeathListener__Array* create_array(int size) {
            return il2cpp::array_new<app::IVitalsDeathListener__Array>(get_class(), size);
        }
    } // namespace IVitalsDeathListener
} // namespace app::classes::types
