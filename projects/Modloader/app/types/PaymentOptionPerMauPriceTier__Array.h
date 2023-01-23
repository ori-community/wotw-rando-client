#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PaymentOptionPerMauPriceTier__Array__Class.h>
#include <Modloader/app/structs/PaymentOptionPerMauPriceTier__Array.h>

namespace app::classes::types {
    namespace PaymentOptionPerMauPriceTier__Array {
        namespace {
            inline app::PaymentOptionPerMauPriceTier__Array__Class* type_info_ref = nullptr;
        }
        inline app::PaymentOptionPerMauPriceTier__Array__Class** type_info = &type_info_ref;
        inline app::PaymentOptionPerMauPriceTier__Array__Class* get_class() {
            return il2cpp::get_class<app::PaymentOptionPerMauPriceTier__Array__Class>(type_info, "PlayFab.PlayStreamModels", "PaymentOptionPerMauPriceTier[]");
        }
        inline app::PaymentOptionPerMauPriceTier__Array* create() {
            return il2cpp::create_object<app::PaymentOptionPerMauPriceTier__Array>(get_class());
        }
    } // namespace PaymentOptionPerMauPriceTier__Array
} // namespace app::classes::types
