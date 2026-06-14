#pragma once
#include <Modloader/app/structs/SeinCinematicToGameplay.h>
#include <Modloader/app/structs/SeinCinematicToGameplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinCinematicToGameplay {
        inline app::SeinCinematicToGameplay__Class** type_info() {
            static app::SeinCinematicToGameplay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinCinematicToGameplay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinCinematicToGameplay__Class* get_class() {
            return il2cpp::get_class<app::SeinCinematicToGameplay__Class>(type_info(), "", "SeinCinematicToGameplay");
        }
        inline app::SeinCinematicToGameplay* create() {
            return il2cpp::create_object<app::SeinCinematicToGameplay>(get_class());
        }
    } // namespace SeinCinematicToGameplay
} // namespace app::classes::types
