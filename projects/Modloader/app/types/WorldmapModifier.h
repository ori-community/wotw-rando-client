#pragma once
#include <Modloader/app/structs/WorldmapModifier.h>
#include <Modloader/app/structs/WorldmapModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldmapModifier {
        inline app::WorldmapModifier__Class** type_info() {
            static app::WorldmapModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldmapModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldmapModifier__Class* get_class() {
            return il2cpp::get_class<app::WorldmapModifier__Class>(type_info(), "", "WorldmapModifier");
        }
        inline app::WorldmapModifier* create() {
            return il2cpp::create_object<app::WorldmapModifier>(get_class());
        }
    } // namespace WorldmapModifier
} // namespace app::classes::types
