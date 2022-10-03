#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnCollisionExit {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OnCollisionExit__Class** type_info;
        inline app::OnCollisionExit__Class* get_class() {
            return il2cpp::get_class<app::OnCollisionExit__Class>(type_info, "fsm.triggers", "OnCollisionExit");
        }
        inline app::OnCollisionExit* create() {
            return il2cpp::create_object<app::OnCollisionExit>(get_class());
        }
    } // namespace OnCollisionExit
} // namespace app::classes::types
