#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonFloat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonFloat__Class** type_info;
        inline app::MoonFloat__Class* get_class() {
            return il2cpp::get_class<app::MoonFloat__Class>(type_info, "Moon", "MoonFloat");
        }
        inline app::MoonFloat* create() {
            return il2cpp::create_object<app::MoonFloat>(get_class());
        }
        inline app::MoonFloat__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonFloat__Array>(get_class(), size);
        }
    } // namespace MoonFloat
} // namespace app::classes::types
