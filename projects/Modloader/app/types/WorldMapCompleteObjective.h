#pragma once
#include <Modloader/app/structs/WorldMapCompleteObjective.h>
#include <Modloader/app/structs/WorldMapCompleteObjective__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldMapCompleteObjective {
        inline app::WorldMapCompleteObjective__Class** type_info() {
            static app::WorldMapCompleteObjective__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldMapCompleteObjective__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldMapCompleteObjective__Class* get_class() {
            return il2cpp::get_class<app::WorldMapCompleteObjective__Class>(type_info(), "", "WorldMapCompleteObjective");
        }
        inline app::WorldMapCompleteObjective* create() {
            return il2cpp::create_object<app::WorldMapCompleteObjective>(get_class());
        }
    } // namespace WorldMapCompleteObjective
} // namespace app::classes::types
