#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerRespawnTrigger__Class.h>
#include <Modloader/app/structs/PlayerRespawnTrigger.h>

namespace app::classes::types {
    namespace PlayerRespawnTrigger {
        namespace {
            inline app::PlayerRespawnTrigger__Class* type_info_ref = nullptr;
        }
        inline app::PlayerRespawnTrigger__Class** type_info = &type_info_ref;
        inline app::PlayerRespawnTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerRespawnTrigger__Class>(type_info, "", "PlayerRespawnTrigger");
        }
        inline app::PlayerRespawnTrigger* create() {
            return il2cpp::create_object<app::PlayerRespawnTrigger>(get_class());
        }
    } // namespace PlayerRespawnTrigger
} // namespace app::classes::types
