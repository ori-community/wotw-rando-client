#pragma once
#include <Modloader/app/structs/CartStopper.h>
#include <Modloader/app/structs/CartStopper__Array.h>
#include <Modloader/app/structs/CartStopper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartStopper {
        inline app::CartStopper__Class** type_info() {
            static app::CartStopper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CartStopper__Class**)(modloader::win::memory::resolve_rva(0x0478D7E8));
            }
            return cache;
        }
        inline app::CartStopper__Class* get_class() {
            return il2cpp::get_class<app::CartStopper__Class>(type_info(), "", "CartStopper");
        }
        inline app::CartStopper* create() {
            return il2cpp::create_object<app::CartStopper>(get_class());
        }
        inline app::CartStopper__Array* create_array(int size) {
            return il2cpp::array_new<app::CartStopper__Array>(get_class(), size);
        }
        inline app::CartStopper__Array* create_array(const std::vector<app::CartStopper*>& items) {
            return il2cpp::array_new<app::CartStopper__Array>(get_class(), items);
        }
    } // namespace CartStopper
} // namespace app::classes::types
