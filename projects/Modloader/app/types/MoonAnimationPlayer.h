#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonAnimationPlayer__Class.h>
#include <Modloader/app/structs/MoonAnimationPlayer.h>

namespace app::classes::types {
    namespace MoonAnimationPlayer {
        namespace {
            inline app::MoonAnimationPlayer__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimationPlayer__Class** type_info = &type_info_ref;
        inline app::MoonAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimationPlayer__Class>(type_info, "Moon", "MoonAnimationPlayer");
        }
        inline app::MoonAnimationPlayer* create() {
            return il2cpp::create_object<app::MoonAnimationPlayer>(get_class());
        }
    } // namespace MoonAnimationPlayer
} // namespace app::classes::types
