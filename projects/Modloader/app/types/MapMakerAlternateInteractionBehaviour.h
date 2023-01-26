#pragma once
#include <Modloader/app/structs/MapMakerAlternateInteractionBehaviour.h>
#include <Modloader/app/structs/MapMakerAlternateInteractionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapMakerAlternateInteractionBehaviour {
        inline app::MapMakerAlternateInteractionBehaviour__Class** type_info() {
            static app::MapMakerAlternateInteractionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapMakerAlternateInteractionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapMakerAlternateInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerAlternateInteractionBehaviour__Class>(type_info(), "Moon", "MapMakerAlternateInteractionBehaviour");
        }
        inline app::MapMakerAlternateInteractionBehaviour* create() {
            return il2cpp::create_object<app::MapMakerAlternateInteractionBehaviour>(get_class());
        }
    } // namespace MapMakerAlternateInteractionBehaviour
} // namespace app::classes::types
