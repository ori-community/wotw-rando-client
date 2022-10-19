#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerLoop {
        namespace {
            inline app::PlayerLoop__Class* type_info_ref = nullptr;
        }
        inline app::PlayerLoop__Class** type_info = &type_info_ref;
        inline app::PlayerLoop__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoop__Class>(type_info, "UnityEngine.Experimental.LowLevel", "PlayerLoop");
        }
        inline app::PlayerLoop* create() {
            return il2cpp::create_object<app::PlayerLoop>(get_class());
        }
    } // namespace PlayerLoop
} // namespace app::classes::types
