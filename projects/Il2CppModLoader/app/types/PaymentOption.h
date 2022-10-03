#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PaymentOption {
        namespace {
            app::PaymentOption__Class* type_info_ref = nullptr;
        }
        app::PaymentOption__Class** type_info = &type_info_ref;
        inline app::PaymentOption__Class* get_class() {
            return il2cpp::get_class<app::PaymentOption__Class>(type_info, "PlayFab.ClientModels", "PaymentOption");
        }
        inline app::PaymentOption* create() {
            return il2cpp::create_object<app::PaymentOption>(get_class());
        }
        inline app::PaymentOption__Array* create_array(int size) {
            return il2cpp::array_new<app::PaymentOption__Array>(get_class(), size);
        }
    } // namespace PaymentOption
} // namespace app::classes::types
