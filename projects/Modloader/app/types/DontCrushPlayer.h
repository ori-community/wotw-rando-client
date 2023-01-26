#pragma once
#include <Modloader/app/structs/DontCrushPlayer.h>
#include <Modloader/app/structs/DontCrushPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DontCrushPlayer {
        inline app::DontCrushPlayer__Class** type_info() {
            static app::DontCrushPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DontCrushPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DontCrushPlayer__Class* get_class() {
            return il2cpp::get_class<app::DontCrushPlayer__Class>(type_info(), "", "DontCrushPlayer");
        }
        inline app::DontCrushPlayer* create() {
            return il2cpp::create_object<app::DontCrushPlayer>(get_class());
        }
    } // namespace DontCrushPlayer
} // namespace app::classes::types
