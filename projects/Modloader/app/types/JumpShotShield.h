#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JumpShotShield__Class.h>
#include <Modloader/app/structs/JumpShotShield.h>

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
