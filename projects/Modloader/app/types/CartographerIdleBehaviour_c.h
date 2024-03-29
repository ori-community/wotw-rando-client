#pragma once
#include <Modloader/app/structs/CartographerIdleBehaviour_c.h>
#include <Modloader/app/structs/CartographerIdleBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartographerIdleBehaviour_c {
        inline app::CartographerIdleBehaviour_c__Class** type_info() {
            static app::CartographerIdleBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CartographerIdleBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04773398));
            }
            return cache;
        }
        inline app::CartographerIdleBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CartographerIdleBehaviour_c__Class>(type_info(), "", "CartographerIdleBehaviour", "<>c");
        }
        inline app::CartographerIdleBehaviour_c* create() {
            return il2cpp::create_object<app::CartographerIdleBehaviour_c>(get_class());
        }
    } // namespace CartographerIdleBehaviour_c
} // namespace app::classes::types
