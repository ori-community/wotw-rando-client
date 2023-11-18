#pragma once
#include <Modloader/app/structs/MapMakerInteractionBehaviour.h>
#include <Modloader/app/structs/MapMakerInteractionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapMakerInteractionBehaviour {
        inline app::MapMakerInteractionBehaviour__Class** type_info() {
            static app::MapMakerInteractionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapMakerInteractionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapMakerInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerInteractionBehaviour__Class>(type_info(), "Moon", "MapMakerInteractionBehaviour");
        }
        inline app::MapMakerInteractionBehaviour* create() {
            return il2cpp::create_object<app::MapMakerInteractionBehaviour>(get_class());
        }
    } // namespace MapMakerInteractionBehaviour
} // namespace app::classes::types
