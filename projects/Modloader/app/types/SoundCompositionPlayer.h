#pragma once
#include <Modloader/app/structs/SoundCompositionPlayer.h>
#include <Modloader/app/structs/SoundCompositionPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundCompositionPlayer {
        inline app::SoundCompositionPlayer__Class** type_info() {
            static app::SoundCompositionPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundCompositionPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundCompositionPlayer__Class* get_class() {
            return il2cpp::get_class<app::SoundCompositionPlayer__Class>(type_info(), "", "SoundCompositionPlayer");
        }
        inline app::SoundCompositionPlayer* create() {
            return il2cpp::create_object<app::SoundCompositionPlayer>(get_class());
        }
    } // namespace SoundCompositionPlayer
} // namespace app::classes::types
