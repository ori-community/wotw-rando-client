#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnCollisionStay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OnCollisionStay__Class** type_info;
        inline app::OnCollisionStay__Class* get_class() {
            return il2cpp::get_class<app::OnCollisionStay__Class>(type_info, "fsm.triggers", "OnCollisionStay");
        }
        inline app::OnCollisionStay* create() {
            return il2cpp::create_object<app::OnCollisionStay>(get_class());
        }
    } // namespace OnCollisionStay
} // namespace app::classes::types
