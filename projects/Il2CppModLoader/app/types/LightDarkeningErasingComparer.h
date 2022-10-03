#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightDarkeningErasingComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightDarkeningErasingComparer__Class** type_info;
        inline app::LightDarkeningErasingComparer__Class* get_class() {
            return il2cpp::get_class<app::LightDarkeningErasingComparer__Class>(type_info, "", "LightDarkeningErasingComparer");
        }
        inline app::LightDarkeningErasingComparer* create() {
            return il2cpp::create_object<app::LightDarkeningErasingComparer>(get_class());
        }
    } // namespace LightDarkeningErasingComparer
} // namespace app::classes::types
