#pragma once
#include <Modloader/app/structs/SurfaceMaterialTimelinePlayer.h>
#include <Modloader/app/structs/SurfaceMaterialTimelinePlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurfaceMaterialTimelinePlayer {
        inline app::SurfaceMaterialTimelinePlayer__Class** type_info() {
            static app::SurfaceMaterialTimelinePlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurfaceMaterialTimelinePlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurfaceMaterialTimelinePlayer__Class* get_class() {
            return il2cpp::get_class<app::SurfaceMaterialTimelinePlayer__Class>(type_info(), "", "SurfaceMaterialTimelinePlayer");
        }
        inline app::SurfaceMaterialTimelinePlayer* create() {
            return il2cpp::create_object<app::SurfaceMaterialTimelinePlayer>(get_class());
        }
    } // namespace SurfaceMaterialTimelinePlayer
} // namespace app::classes::types
