#pragma once
#include <Modloader/app/structs/AppProofOfPurchaseKeyResponse_t.h>
#include <Modloader/app/structs/AppProofOfPurchaseKeyResponse_t__Boxed.h>
#include <Modloader/app/structs/AppProofOfPurchaseKeyResponse_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AppProofOfPurchaseKeyResponse_t {
        inline app::AppProofOfPurchaseKeyResponse_t__Class** type_info() {
            static app::AppProofOfPurchaseKeyResponse_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AppProofOfPurchaseKeyResponse_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AppProofOfPurchaseKeyResponse_t__Class* get_class() {
            return il2cpp::get_class<app::AppProofOfPurchaseKeyResponse_t__Class>(type_info(), "Steamworks", "AppProofOfPurchaseKeyResponse_t");
        }
        inline app::AppProofOfPurchaseKeyResponse_t* create() {
            return il2cpp::create_object<app::AppProofOfPurchaseKeyResponse_t>(get_class());
        }
        inline app::AppProofOfPurchaseKeyResponse_t__Boxed* box(app::AppProofOfPurchaseKeyResponse_t value) {
            return il2cpp::box_value<app::AppProofOfPurchaseKeyResponse_t__Boxed>(get_class(), value);
        }
    } // namespace AppProofOfPurchaseKeyResponse_t
} // namespace app::classes::types
