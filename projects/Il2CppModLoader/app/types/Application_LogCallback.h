#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Application_LogCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Application_LogCallback__Class** type_info;
        inline app::Application_LogCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Application_LogCallback__Class>(type_info, "UnityEngine", "Application", "LogCallback");
        }
        inline app::Application_LogCallback* create() {
            return il2cpp::create_object<app::Application_LogCallback>(get_class());
        }
    } // namespace Application_LogCallback
} // namespace app::classes::types
