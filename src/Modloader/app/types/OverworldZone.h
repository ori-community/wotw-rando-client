#pragma once
#include <Modloader/app/structs/OverworldZone.h>
#include <Modloader/app/structs/OverworldZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OverworldZone {
        inline app::OverworldZone__Class** type_info() {
            static app::OverworldZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OverworldZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OverworldZone__Class* get_class() {
            return il2cpp::get_class<app::OverworldZone__Class>(type_info(), "", "OverworldZone");
        }
        inline app::OverworldZone* create() {
            return il2cpp::create_object<app::OverworldZone>(get_class());
        }
    } // namespace OverworldZone
} // namespace app::classes::types
