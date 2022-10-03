#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvas {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCanvas__Class** type_info;
        inline app::LightCanvas__Class* get_class() {
            return il2cpp::get_class<app::LightCanvas__Class>(type_info, "", "LightCanvas");
        }
        inline app::LightCanvas* create() {
            return il2cpp::create_object<app::LightCanvas>(get_class());
        }
        inline app::LightCanvas__Array* create_array(int size) {
            return il2cpp::array_new<app::LightCanvas__Array>(get_class(), size);
        }
    } // namespace LightCanvas
} // namespace app::classes::types
