#pragma once
#include <Modloader/app/structs/CrushPlayer.h>
#include <Modloader/app/structs/CrushPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrushPlayer {
        inline app::CrushPlayer__Class** type_info() {
            static app::CrushPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrushPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrushPlayer__Class* get_class() {
            return il2cpp::get_class<app::CrushPlayer__Class>(type_info(), "", "CrushPlayer");
        }
        inline app::CrushPlayer* create() {
            return il2cpp::create_object<app::CrushPlayer>(get_class());
        }
    } // namespace CrushPlayer
} // namespace app::classes::types
