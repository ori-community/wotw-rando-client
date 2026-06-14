#pragma once
#include <Modloader/app/structs/TransparentWallVisuals.h>
#include <Modloader/app/structs/TransparentWallVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparentWallVisuals {
        inline app::TransparentWallVisuals__Class** type_info() {
            static app::TransparentWallVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransparentWallVisuals__Class**)(modloader::win::memory::resolve_rva(0x0478AB20));
            }
            return cache;
        }
        inline app::TransparentWallVisuals__Class* get_class() {
            return il2cpp::get_class<app::TransparentWallVisuals__Class>(type_info(), "", "TransparentWallVisuals");
        }
        inline app::TransparentWallVisuals* create() {
            return il2cpp::create_object<app::TransparentWallVisuals>(get_class());
        }
    } // namespace TransparentWallVisuals
} // namespace app::classes::types
