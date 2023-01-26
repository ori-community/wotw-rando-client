#pragma once
#include <Modloader/app/structs/PaymentOptionPerMauPriceTier__Array.h>
#include <Modloader/app/structs/PaymentOptionPerMauPriceTier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PaymentOptionPerMauPriceTier__Array {
        inline app::PaymentOptionPerMauPriceTier__Array__Class** type_info() {
            static app::PaymentOptionPerMauPriceTier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PaymentOptionPerMauPriceTier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PaymentOptionPerMauPriceTier__Array__Class* get_class() {
            return il2cpp::get_class<app::PaymentOptionPerMauPriceTier__Array__Class>(type_info(), "PlayFab.PlayStreamModels", "PaymentOptionPerMauPriceTier[]");
        }
        inline app::PaymentOptionPerMauPriceTier__Array* create() {
            return il2cpp::create_object<app::PaymentOptionPerMauPriceTier__Array>(get_class());
        }
    } // namespace PaymentOptionPerMauPriceTier__Array
} // namespace app::classes::types
