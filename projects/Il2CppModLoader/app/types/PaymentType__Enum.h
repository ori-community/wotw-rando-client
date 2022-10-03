#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PaymentType__Enum {
        namespace {
            app::PaymentType__Enum__Class* type_info_ref = nullptr;
        }
        app::PaymentType__Enum__Class** type_info = &type_info_ref;
        inline app::PaymentType__Enum__Class* get_class() {
            return il2cpp::get_class<app::PaymentType__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "PaymentType");
        }
        inline app::PaymentType__Enum* create() {
            return il2cpp::create_object<app::PaymentType__Enum>(get_class());
        }
    } // namespace PaymentType__Enum
} // namespace app::classes::types
