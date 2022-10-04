#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILogHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILogHandler__Class** type_info;
        inline app::ILogHandler__Class* get_class() {
            return il2cpp::get_class<app::ILogHandler__Class>(type_info, "UnityEngine", "ILogHandler");
        }
        inline app::ILogHandler* create() {
            return il2cpp::create_object<app::ILogHandler>(get_class());
        }
    } // namespace ILogHandler
} // namespace app::classes::types
