#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PaymentOptionPerMauPriceTier__Array {
        namespace {
            app::PaymentOptionPerMauPriceTier__Array__Class* type_info_ref = nullptr;
        }
        app::PaymentOptionPerMauPriceTier__Array__Class** type_info = &type_info_ref;
        inline app::PaymentOptionPerMauPriceTier__Array__Class* get_class() {
            return il2cpp::get_class<app::PaymentOptionPerMauPriceTier__Array__Class>(type_info, "PlayFab.PlayStreamModels", "PaymentOptionPerMauPriceTier[]");
        }
        inline app::PaymentOptionPerMauPriceTier__Array* create() {
            return il2cpp::create_object<app::PaymentOptionPerMauPriceTier__Array>(get_class());
        }
    } // namespace PaymentOptionPerMauPriceTier__Array
} // namespace app::classes::types
