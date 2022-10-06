#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightPlatform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightPlatform__Class** type_info;
        inline app::LightPlatform__Class* get_class() {
            return il2cpp::get_class<app::LightPlatform__Class>(type_info, "", "LightPlatform");
        }
        inline app::LightPlatform* create() {
            return il2cpp::create_object<app::LightPlatform>(get_class());
        }
        inline app::LightPlatform__Array* create_array(int size) {
            return il2cpp::array_new<app::LightPlatform__Array>(get_class(), size);
        }
        inline app::LightPlatform__Array* create_array(const std::vector<app::LightPlatform*>& items) {
            return il2cpp::array_new<app::LightPlatform__Array>(get_class(), items);
        }
    } // namespace LightPlatform
} // namespace app::classes::types
