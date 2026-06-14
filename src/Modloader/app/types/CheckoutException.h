#pragma once
#include <Modloader/app/structs/CheckoutException.h>
#include <Modloader/app/structs/CheckoutException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CheckoutException {
        inline app::CheckoutException__Class** type_info() {
            static app::CheckoutException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CheckoutException__Class**)(modloader::win::memory::resolve_rva(0x0474BE38));
            }
            return cache;
        }
        inline app::CheckoutException__Class* get_class() {
            return il2cpp::get_class<app::CheckoutException__Class>(type_info(), "System.ComponentModel.Design", "CheckoutException");
        }
        inline app::CheckoutException* create() {
            return il2cpp::create_object<app::CheckoutException>(get_class());
        }
    } // namespace CheckoutException
} // namespace app::classes::types
