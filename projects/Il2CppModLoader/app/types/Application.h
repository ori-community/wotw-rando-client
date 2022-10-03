#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Application {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Application__Class** type_info;
        inline app::Application__Class* get_class() {
            return il2cpp::get_class<app::Application__Class>(type_info, "UnityEngine", "Application");
        }
        inline app::Application* create() {
            return il2cpp::create_object<app::Application>(get_class());
        }
    } // namespace Application
} // namespace app::classes::types
