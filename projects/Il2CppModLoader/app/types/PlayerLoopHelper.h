#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerLoopHelper {
        namespace {
            inline app::PlayerLoopHelper__Class* type_info_ref = nullptr;
        }
        inline app::PlayerLoopHelper__Class** type_info = &type_info_ref;
        inline app::PlayerLoopHelper__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoopHelper__Class>(type_info, "Moon", "PlayerLoopHelper");
        }
        inline app::PlayerLoopHelper* create() {
            return il2cpp::create_object<app::PlayerLoopHelper>(get_class());
        }
    } // namespace PlayerLoopHelper
} // namespace app::classes::types
