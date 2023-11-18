#pragma once
#include <Modloader/app/structs/MapMakerDidNotBuyBehaviour.h>
#include <Modloader/app/structs/MapMakerDidNotBuyBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapMakerDidNotBuyBehaviour {
        inline app::MapMakerDidNotBuyBehaviour__Class** type_info() {
            static app::MapMakerDidNotBuyBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapMakerDidNotBuyBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapMakerDidNotBuyBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerDidNotBuyBehaviour__Class>(type_info(), "Moon", "MapMakerDidNotBuyBehaviour");
        }
        inline app::MapMakerDidNotBuyBehaviour* create() {
            return il2cpp::create_object<app::MapMakerDidNotBuyBehaviour>(get_class());
        }
    } // namespace MapMakerDidNotBuyBehaviour
} // namespace app::classes::types
