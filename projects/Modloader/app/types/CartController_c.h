#pragma once
#include <Modloader/app/structs/CartController_c.h>
#include <Modloader/app/structs/CartController_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartController_c {
        inline app::CartController_c__Class** type_info() {
            static app::CartController_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CartController_c__Class**)(modloader::win::memory::resolve_rva(0x0475AAE0));
            }
            return cache;
        }
        inline app::CartController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CartController_c__Class>(type_info(), "", "CartController", "<>c");
        }
        inline app::CartController_c* create() {
            return il2cpp::create_object<app::CartController_c>(get_class());
        }
    } // namespace CartController_c
} // namespace app::classes::types
