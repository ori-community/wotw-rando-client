#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerTriggerSetup__Class.h>
#include <Modloader/app/structs/PlayerTriggerSetup.h>

namespace app::classes::types {
    namespace PlayerTriggerSetup {
        namespace {
            inline app::PlayerTriggerSetup__Class* type_info_ref = nullptr;
        }
        inline app::PlayerTriggerSetup__Class** type_info = &type_info_ref;
        inline app::PlayerTriggerSetup__Class* get_class() {
            return il2cpp::get_class<app::PlayerTriggerSetup__Class>(type_info, "", "PlayerTriggerSetup");
        }
        inline app::PlayerTriggerSetup* create() {
            return il2cpp::create_object<app::PlayerTriggerSetup>(get_class());
        }
    } // namespace PlayerTriggerSetup
} // namespace app::classes::types
