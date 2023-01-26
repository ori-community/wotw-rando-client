#pragma once
#include <Modloader/app/structs/WorldMapAreaType__Enum.h>
#include <Modloader/app/structs/WorldMapAreaType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldMapAreaType__Enum {
        inline app::WorldMapAreaType__Enum__Class** type_info() {
            static app::WorldMapAreaType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldMapAreaType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldMapAreaType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WorldMapAreaType__Enum__Class>(type_info(), "", "WorldMapAreaType");
        }
        inline app::WorldMapAreaType__Enum* create() {
            return il2cpp::create_object<app::WorldMapAreaType__Enum>(get_class());
        }
    } // namespace WorldMapAreaType__Enum
} // namespace app::classes::types
