#pragma once
#include <Modloader/app/structs/MicroTxnAuthorizationResponse_t.h>
#include <Modloader/app/structs/MicroTxnAuthorizationResponse_t__Boxed.h>
#include <Modloader/app/structs/MicroTxnAuthorizationResponse_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroTxnAuthorizationResponse_t {
        inline app::MicroTxnAuthorizationResponse_t__Class** type_info() {
            static app::MicroTxnAuthorizationResponse_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MicroTxnAuthorizationResponse_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MicroTxnAuthorizationResponse_t__Class* get_class() {
            return il2cpp::get_class<app::MicroTxnAuthorizationResponse_t__Class>(type_info(), "Steamworks", "MicroTxnAuthorizationResponse_t");
        }
        inline app::MicroTxnAuthorizationResponse_t* create() {
            return il2cpp::create_object<app::MicroTxnAuthorizationResponse_t>(get_class());
        }
        inline app::MicroTxnAuthorizationResponse_t__Boxed* box(app::MicroTxnAuthorizationResponse_t value) {
            return il2cpp::box_value<app::MicroTxnAuthorizationResponse_t__Boxed>(get_class(), value);
        }
    } // namespace MicroTxnAuthorizationResponse_t
} // namespace app::classes::types
