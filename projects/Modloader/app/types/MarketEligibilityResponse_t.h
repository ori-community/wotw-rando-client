#pragma once
#include <Modloader/app/structs/MarketEligibilityResponse_t.h>
#include <Modloader/app/structs/MarketEligibilityResponse_t__Boxed.h>
#include <Modloader/app/structs/MarketEligibilityResponse_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MarketEligibilityResponse_t {
        inline app::MarketEligibilityResponse_t__Class** type_info() {
            static app::MarketEligibilityResponse_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MarketEligibilityResponse_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MarketEligibilityResponse_t__Class* get_class() {
            return il2cpp::get_class<app::MarketEligibilityResponse_t__Class>(type_info(), "Steamworks", "MarketEligibilityResponse_t");
        }
        inline app::MarketEligibilityResponse_t* create() {
            return il2cpp::create_object<app::MarketEligibilityResponse_t>(get_class());
        }
        inline app::MarketEligibilityResponse_t__Boxed* box(app::MarketEligibilityResponse_t value) {
            return il2cpp::box_value<app::MarketEligibilityResponse_t__Boxed>(get_class(), value);
        }
    } // namespace MarketEligibilityResponse_t
} // namespace app::classes::types
