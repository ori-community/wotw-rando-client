#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnEnterBash {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OnEnterBash__Class** type_info;
        inline app::OnEnterBash__Class* get_class() {
            return il2cpp::get_class<app::OnEnterBash__Class>(type_info, "fsm.triggers", "OnEnterBash");
        }
        inline app::OnEnterBash* create() {
            return il2cpp::create_object<app::OnEnterBash>(get_class());
        }
    } // namespace OnEnterBash
} // namespace app::classes::types
