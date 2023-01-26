#pragma once
#include <Modloader/app/structs/PlayerCollisionStayTrigger.h>
#include <Modloader/app/structs/PlayerCollisionStayTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerCollisionStayTrigger {
        inline app::PlayerCollisionStayTrigger__Class** type_info() {
            static app::PlayerCollisionStayTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerCollisionStayTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerCollisionStayTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerCollisionStayTrigger__Class>(type_info(), "", "PlayerCollisionStayTrigger");
        }
        inline app::PlayerCollisionStayTrigger* create() {
            return il2cpp::create_object<app::PlayerCollisionStayTrigger>(get_class());
        }
    } // namespace PlayerCollisionStayTrigger
} // namespace app::classes::types
