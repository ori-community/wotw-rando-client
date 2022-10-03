#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnvironmentLight {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnvironmentLight__Class** type_info;
        inline app::EnvironmentLight__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentLight__Class>(type_info, "", "EnvironmentLight");
        }
        inline app::EnvironmentLight* create() {
            return il2cpp::create_object<app::EnvironmentLight>(get_class());
        }
        inline app::EnvironmentLight__Array* create_array(int size) {
            return il2cpp::array_new<app::EnvironmentLight__Array>(get_class(), size);
        }
    } // namespace EnvironmentLight
} // namespace app::classes::types
