#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OnCollisionStay {
        inline app::OnCollisionStay__Class** type_info = (app::OnCollisionStay__Class**)(modloader::win::memory::resolve_rva(0x04786A28));
        inline app::OnCollisionStay__Class* get_class() {
            return il2cpp::get_class<app::OnCollisionStay__Class>(type_info, "fsm.triggers", "OnCollisionStay");
        }
        inline app::OnCollisionStay* create() {
            return il2cpp::create_object<app::OnCollisionStay>(get_class());
        }
    } // namespace OnCollisionStay
} // namespace app::classes::types
