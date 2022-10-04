#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUpdateHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUpdateHandler__Class** type_info;
        inline app::IUpdateHandler__Class* get_class() {
            return il2cpp::get_class<app::IUpdateHandler__Class>(type_info, "Moon", "IUpdateHandler");
        }
    } // namespace IUpdateHandler
} // namespace app::classes::types
