#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerCollisionTrigger__Class.h>
#include <Modloader/app/structs/PlayerCollisionTrigger.h>

namespace app::classes::types {
    namespace PlayerCollisionTrigger {
        namespace {
            inline app::PlayerCollisionTrigger__Class* type_info_ref = nullptr;
        }
        inline app::PlayerCollisionTrigger__Class** type_info = &type_info_ref;
        inline app::PlayerCollisionTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerCollisionTrigger__Class>(type_info, "", "PlayerCollisionTrigger");
        }
        inline app::PlayerCollisionTrigger* create() {
            return il2cpp::create_object<app::PlayerCollisionTrigger>(get_class());
        }
    } // namespace PlayerCollisionTrigger
} // namespace app::classes::types
