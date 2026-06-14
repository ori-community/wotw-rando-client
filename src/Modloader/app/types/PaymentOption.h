#pragma once
#include <Modloader/app/structs/PaymentOption.h>
#include <Modloader/app/structs/PaymentOption__Array.h>
#include <Modloader/app/structs/PaymentOption__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PaymentOption {
        inline app::PaymentOption__Class** type_info() {
            static app::PaymentOption__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PaymentOption__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PaymentOption__Class* get_class() {
            return il2cpp::get_class<app::PaymentOption__Class>(type_info(), "PlayFab.ClientModels", "PaymentOption");
        }
        inline app::PaymentOption* create() {
            return il2cpp::create_object<app::PaymentOption>(get_class());
        }
        inline app::PaymentOption__Array* create_array(int size) {
            return il2cpp::array_new<app::PaymentOption__Array>(get_class(), size);
        }
        inline app::PaymentOption__Array* create_array(const std::vector<app::PaymentOption*>& items) {
            return il2cpp::array_new<app::PaymentOption__Array>(get_class(), items);
        }
    } // namespace PaymentOption
} // namespace app::classes::types
