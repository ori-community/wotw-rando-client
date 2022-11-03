#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerCollisionStayTrigger {
        namespace {
            inline app::PlayerCollisionStayTrigger__Class* type_info_ref = nullptr;
        }
        inline app::PlayerCollisionStayTrigger__Class** type_info = &type_info_ref;
        inline app::PlayerCollisionStayTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerCollisionStayTrigger__Class>(type_info, "", "PlayerCollisionStayTrigger");
        }
        inline app::PlayerCollisionStayTrigger* create() {
            return il2cpp::create_object<app::PlayerCollisionStayTrigger>(get_class());
        }
    } // namespace PlayerCollisionStayTrigger
} // namespace app::classes::types
