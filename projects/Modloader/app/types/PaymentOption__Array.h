#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PaymentOption__Array__Class.h>
#include <Modloader/app/structs/PaymentOption__Array.h>

namespace app::classes::types {
    namespace PaymentOption__Array {
        namespace {
            inline app::PaymentOption__Array__Class* type_info_ref = nullptr;
        }
        inline app::PaymentOption__Array__Class** type_info = &type_info_ref;
        inline app::PaymentOption__Array__Class* get_class() {
            return il2cpp::get_class<app::PaymentOption__Array__Class>(type_info, "PlayFab.ClientModels", "PaymentOption[]");
        }
        inline app::PaymentOption__Array* create() {
            return il2cpp::create_object<app::PaymentOption__Array>(get_class());
        }
    } // namespace PaymentOption__Array
} // namespace app::classes::types
