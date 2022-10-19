#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AppProofOfPurchaseKeyResponse_t {
        namespace {
            inline app::AppProofOfPurchaseKeyResponse_t__Class* type_info_ref = nullptr;
        }
        inline app::AppProofOfPurchaseKeyResponse_t__Class** type_info = &type_info_ref;
        inline app::AppProofOfPurchaseKeyResponse_t__Class* get_class() {
            return il2cpp::get_class<app::AppProofOfPurchaseKeyResponse_t__Class>(type_info, "Steamworks", "AppProofOfPurchaseKeyResponse_t");
        }
        inline app::AppProofOfPurchaseKeyResponse_t* create() {
            return il2cpp::create_object<app::AppProofOfPurchaseKeyResponse_t>(get_class());
        }
        inline app::AppProofOfPurchaseKeyResponse_t__Boxed* box(app::AppProofOfPurchaseKeyResponse_t value) {
            return il2cpp::box_value<app::AppProofOfPurchaseKeyResponse_t__Boxed>(get_class(), value);
        }
    } // namespace AppProofOfPurchaseKeyResponse_t
} // namespace app::classes::types
