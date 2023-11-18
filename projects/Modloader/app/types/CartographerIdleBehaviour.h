#pragma once
#include <Modloader/app/structs/CartographerIdleBehaviour.h>
#include <Modloader/app/structs/CartographerIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartographerIdleBehaviour {
        inline app::CartographerIdleBehaviour__Class** type_info() {
            static app::CartographerIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartographerIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartographerIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CartographerIdleBehaviour__Class>(type_info(), "", "CartographerIdleBehaviour");
        }
        inline app::CartographerIdleBehaviour* create() {
            return il2cpp::create_object<app::CartographerIdleBehaviour>(get_class());
        }
    } // namespace CartographerIdleBehaviour
} // namespace app::classes::types
