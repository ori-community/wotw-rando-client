#pragma once
#include <Modloader/app/structs/MapMakerGiveMapBehaviour.h>
#include <Modloader/app/structs/MapMakerGiveMapBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapMakerGiveMapBehaviour {
        inline app::MapMakerGiveMapBehaviour__Class** type_info() {
            static app::MapMakerGiveMapBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapMakerGiveMapBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapMakerGiveMapBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerGiveMapBehaviour__Class>(type_info(), "Moon", "MapMakerGiveMapBehaviour");
        }
        inline app::MapMakerGiveMapBehaviour* create() {
            return il2cpp::create_object<app::MapMakerGiveMapBehaviour>(get_class());
        }
    } // namespace MapMakerGiveMapBehaviour
} // namespace app::classes::types
