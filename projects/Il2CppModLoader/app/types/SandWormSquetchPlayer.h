#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormSquetchPlayer {
        namespace {
            app::SandWormSquetchPlayer__Class* type_info_ref = nullptr;
        }
        app::SandWormSquetchPlayer__Class** type_info = &type_info_ref;
        inline app::SandWormSquetchPlayer__Class* get_class() {
            return il2cpp::get_class<app::SandWormSquetchPlayer__Class>(type_info, "Moon.Timeline", "SandWormSquetchPlayer");
        }
        inline app::SandWormSquetchPlayer* create() {
            return il2cpp::create_object<app::SandWormSquetchPlayer>(get_class());
        }
    } // namespace SandWormSquetchPlayer
} // namespace app::classes::types
