#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightDirectionMapProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightDirectionMapProperty__Class** type_info;
        inline app::LightDirectionMapProperty__Class* get_class() {
            return il2cpp::get_class<app::LightDirectionMapProperty__Class>(type_info, "UberShader", "LightDirectionMapProperty");
        }
        inline app::LightDirectionMapProperty* create() {
            return il2cpp::create_object<app::LightDirectionMapProperty>(get_class());
        }
    } // namespace LightDirectionMapProperty
} // namespace app::classes::types
