#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MarketEligibilityResponse_t {
        namespace {
            app::MarketEligibilityResponse_t__Class* type_info_ref = nullptr;
        }
        app::MarketEligibilityResponse_t__Class** type_info = &type_info_ref;
        inline app::MarketEligibilityResponse_t__Class* get_class() {
            return il2cpp::get_class<app::MarketEligibilityResponse_t__Class>(type_info, "Steamworks", "MarketEligibilityResponse_t");
        }
        inline app::MarketEligibilityResponse_t* create() {
            return il2cpp::create_object<app::MarketEligibilityResponse_t>(get_class());
        }
        inline app::MarketEligibilityResponse_t__Boxed* box(app::MarketEligibilityResponse_t value) {
            return il2cpp::box_value<app::MarketEligibilityResponse_t__Boxed>(get_class(), value);
        }
    } // namespace MarketEligibilityResponse_t
} // namespace app::classes::types
