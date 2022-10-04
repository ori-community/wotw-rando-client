#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMenuTab {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMenuTab__Class** type_info;
        inline app::IMenuTab__Class* get_class() {
            return il2cpp::get_class<app::IMenuTab__Class>(type_info, "", "IMenuTab");
        }
    } // namespace IMenuTab
} // namespace app::classes::types
