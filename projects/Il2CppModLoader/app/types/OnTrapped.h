#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnTrapped {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OnTrapped__Class** type_info;
        inline app::OnTrapped__Class* get_class() {
            return il2cpp::get_class<app::OnTrapped__Class>(type_info, "fsm.triggers", "OnTrapped");
        }
        inline app::OnTrapped* create() {
            return il2cpp::create_object<app::OnTrapped>(get_class());
        }
    } // namespace OnTrapped
} // namespace app::classes::types
