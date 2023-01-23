#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger__Class.h>
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger.h>

namespace app::classes::types {
    namespace PlayerStayInsideZoneTrigger {
        namespace {
            inline app::PlayerStayInsideZoneTrigger__Class* type_info_ref = nullptr;
        }
        inline app::PlayerStayInsideZoneTrigger__Class** type_info = &type_info_ref;
        inline app::PlayerStayInsideZoneTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerStayInsideZoneTrigger__Class>(type_info, "", "PlayerStayInsideZoneTrigger");
        }
        inline app::PlayerStayInsideZoneTrigger* create() {
            return il2cpp::create_object<app::PlayerStayInsideZoneTrigger>(get_class());
        }
    } // namespace PlayerStayInsideZoneTrigger
} // namespace app::classes::types
