#pragma once
#include <Modloader/app/structs/SandWormSquetchPlayer.h>
#include <Modloader/app/structs/SandWormSquetchPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormSquetchPlayer {
        inline app::SandWormSquetchPlayer__Class** type_info() {
            static app::SandWormSquetchPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormSquetchPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormSquetchPlayer__Class* get_class() {
            return il2cpp::get_class<app::SandWormSquetchPlayer__Class>(type_info(), "Moon.Timeline", "SandWormSquetchPlayer");
        }
        inline app::SandWormSquetchPlayer* create() {
            return il2cpp::create_object<app::SandWormSquetchPlayer>(get_class());
        }
    } // namespace SandWormSquetchPlayer
} // namespace app::classes::types
