#pragma once
#include <Modloader/app/structs/PaymentOptionPerMauPriceTier.h>
#include <Modloader/app/structs/PaymentOptionPerMauPriceTier__Array.h>
#include <Modloader/app/structs/PaymentOptionPerMauPriceTier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PaymentOptionPerMauPriceTier {
        inline app::PaymentOptionPerMauPriceTier__Class** type_info() {
            static app::PaymentOptionPerMauPriceTier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PaymentOptionPerMauPriceTier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PaymentOptionPerMauPriceTier__Class* get_class() {
            return il2cpp::get_class<app::PaymentOptionPerMauPriceTier__Class>(type_info(), "PlayFab.PlayStreamModels", "PaymentOptionPerMauPriceTier");
        }
        inline app::PaymentOptionPerMauPriceTier* create() {
            return il2cpp::create_object<app::PaymentOptionPerMauPriceTier>(get_class());
        }
        inline app::PaymentOptionPerMauPriceTier__Array* create_array(int size) {
            return il2cpp::array_new<app::PaymentOptionPerMauPriceTier__Array>(get_class(), size);
        }
        inline app::PaymentOptionPerMauPriceTier__Array* create_array(const std::vector<app::PaymentOptionPerMauPriceTier*>& items) {
            return il2cpp::array_new<app::PaymentOptionPerMauPriceTier__Array>(get_class(), items);
        }
    } // namespace PaymentOptionPerMauPriceTier
} // namespace app::classes::types
