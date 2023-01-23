#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Cart__Class.h>
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/Cart__Array.h>

namespace app::classes::types {
    namespace Cart {
        namespace {
            inline app::Cart__Class* type_info_ref = nullptr;
        }
        inline app::Cart__Class** type_info = &type_info_ref;
        inline app::Cart__Class* get_class() {
            return il2cpp::get_class<app::Cart__Class>(type_info, "", "Cart");
        }
        inline app::Cart* create() {
            return il2cpp::create_object<app::Cart>(get_class());
        }
        inline app::Cart__Array* create_array(int size) {
            return il2cpp::array_new<app::Cart__Array>(get_class(), size);
        }
        inline app::Cart__Array* create_array(const std::vector<app::Cart*>& items) {
            return il2cpp::array_new<app::Cart__Array>(get_class(), items);
        }
    } // namespace Cart
} // namespace app::classes::types
