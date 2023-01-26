#pragma once
#include <Modloader/app/structs/UberStateController_ApplierContext__Array.h>
#include <Modloader/app/structs/UberStateController_ApplierContext__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateController_ApplierContext__Array {
        inline app::UberStateController_ApplierContext__Array__Class** type_info() {
            static app::UberStateController_ApplierContext__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateController_ApplierContext__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateController_ApplierContext__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateController_ApplierContext__Array__Class>(type_info(), "Moon", "UberStateController+ApplierContext[]");
        }
        inline app::UberStateController_ApplierContext__Array* create() {
            return il2cpp::create_object<app::UberStateController_ApplierContext__Array>(get_class());
        }
    } // namespace UberStateController_ApplierContext__Array
} // namespace app::classes::types
