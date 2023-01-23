#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KillPlayer__Class.h>
#include <Modloader/app/structs/KillPlayer.h>

namespace app::classes::types {
    namespace KillPlayer {
        namespace {
            inline app::KillPlayer__Class* type_info_ref = nullptr;
        }
        inline app::KillPlayer__Class** type_info = &type_info_ref;
        inline app::KillPlayer__Class* get_class() {
            return il2cpp::get_class<app::KillPlayer__Class>(type_info, "", "KillPlayer");
        }
        inline app::KillPlayer* create() {
            return il2cpp::create_object<app::KillPlayer>(get_class());
        }
    } // namespace KillPlayer
} // namespace app::classes::types
