#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumpShotShield {
        namespace {
            inline app::JumpShotShield__Class* type_info_ref = nullptr;
        }
        inline app::JumpShotShield__Class** type_info = &type_info_ref;
        inline app::JumpShotShield__Class* get_class() {
            return il2cpp::get_class<app::JumpShotShield__Class>(type_info, "", "JumpShotShield");
        }
        inline app::JumpShotShield* create() {
            return il2cpp::create_object<app::JumpShotShield>(get_class());
        }
    } // namespace JumpShotShield
} // namespace app::classes::types
