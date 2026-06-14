#pragma once
#include <Modloader/app/structs/CartographerTurningBehaviour.h>
#include <Modloader/app/structs/CartographerTurningBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartographerTurningBehaviour {
        inline app::CartographerTurningBehaviour__Class** type_info() {
            static app::CartographerTurningBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartographerTurningBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartographerTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CartographerTurningBehaviour__Class>(type_info(), "", "CartographerTurningBehaviour");
        }
        inline app::CartographerTurningBehaviour* create() {
            return il2cpp::create_object<app::CartographerTurningBehaviour>(get_class());
        }
    } // namespace CartographerTurningBehaviour
} // namespace app::classes::types
