#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerConnectionInternal {
        inline app::PlayerConnectionInternal__Class** type_info = (app::PlayerConnectionInternal__Class**)(modloader::win::memory::resolve_rva(0x047981B0));
        inline app::PlayerConnectionInternal__Class* get_class() {
            return il2cpp::get_class<app::PlayerConnectionInternal__Class>(type_info, "UnityEngine", "PlayerConnectionInternal");
        }
        inline app::PlayerConnectionInternal* create() {
            return il2cpp::create_object<app::PlayerConnectionInternal>(get_class());
        }
    } // namespace PlayerConnectionInternal
} // namespace app::classes::types
