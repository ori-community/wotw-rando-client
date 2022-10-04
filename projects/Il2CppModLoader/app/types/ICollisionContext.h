#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICollisionContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICollisionContext__Class** type_info;
        inline app::ICollisionContext__Class* get_class() {
            return il2cpp::get_class<app::ICollisionContext__Class>(type_info, "", "ICollisionContext");
        }
    } // namespace ICollisionContext
} // namespace app::classes::types
