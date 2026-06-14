#pragma once
#include <Modloader/app/structs/WorldMapRemoveObjective.h>
#include <Modloader/app/structs/WorldMapRemoveObjective__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldMapRemoveObjective {
        inline app::WorldMapRemoveObjective__Class** type_info() {
            static app::WorldMapRemoveObjective__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldMapRemoveObjective__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldMapRemoveObjective__Class* get_class() {
            return il2cpp::get_class<app::WorldMapRemoveObjective__Class>(type_info(), "", "WorldMapRemoveObjective");
        }
        inline app::WorldMapRemoveObjective* create() {
            return il2cpp::create_object<app::WorldMapRemoveObjective>(get_class());
        }
    } // namespace WorldMapRemoveObjective
} // namespace app::classes::types
