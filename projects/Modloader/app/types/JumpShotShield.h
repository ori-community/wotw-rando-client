#pragma once
#include <Modloader/app/structs/JumpShotShield.h>
#include <Modloader/app/structs/JumpShotShield__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpShotShield {
        inline app::JumpShotShield__Class** type_info() {
            static app::JumpShotShield__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpShotShield__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpShotShield__Class* get_class() {
            return il2cpp::get_class<app::JumpShotShield__Class>(type_info(), "", "JumpShotShield");
        }
        inline app::JumpShotShield* create() {
            return il2cpp::create_object<app::JumpShotShield>(get_class());
        }
    } // namespace JumpShotShield
} // namespace app::classes::types
