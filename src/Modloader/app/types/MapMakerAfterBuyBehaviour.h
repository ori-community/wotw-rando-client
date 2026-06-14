#pragma once
#include <Modloader/app/structs/MapMakerAfterBuyBehaviour.h>
#include <Modloader/app/structs/MapMakerAfterBuyBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapMakerAfterBuyBehaviour {
        inline app::MapMakerAfterBuyBehaviour__Class** type_info() {
            static app::MapMakerAfterBuyBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapMakerAfterBuyBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapMakerAfterBuyBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerAfterBuyBehaviour__Class>(type_info(), "Moon", "MapMakerAfterBuyBehaviour");
        }
        inline app::MapMakerAfterBuyBehaviour* create() {
            return il2cpp::create_object<app::MapMakerAfterBuyBehaviour>(get_class());
        }
    } // namespace MapMakerAfterBuyBehaviour
} // namespace app::classes::types
