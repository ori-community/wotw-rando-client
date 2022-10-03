#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Logger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Logger__Class** type_info;
        inline app::Logger__Class* get_class() {
            return il2cpp::get_class<app::Logger__Class>(type_info, "UnityEngine", "Logger");
        }
        inline app::Logger* create() {
            return il2cpp::create_object<app::Logger>(get_class());
        }
    } // namespace Logger
} // namespace app::classes::types
