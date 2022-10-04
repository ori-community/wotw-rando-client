#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILogger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILogger__Class** type_info;
        inline app::ILogger__Class* get_class() {
            return il2cpp::get_class<app::ILogger__Class>(type_info, "UnityEngine", "ILogger");
        }
    } // namespace ILogger
} // namespace app::classes::types
