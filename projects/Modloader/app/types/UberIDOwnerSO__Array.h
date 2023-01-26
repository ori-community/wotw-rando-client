#pragma once
#include <Modloader/app/structs/UberIDOwnerSO__Array.h>
#include <Modloader/app/structs/UberIDOwnerSO__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberIDOwnerSO__Array {
        inline app::UberIDOwnerSO__Array__Class** type_info() {
            static app::UberIDOwnerSO__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberIDOwnerSO__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberIDOwnerSO__Array__Class* get_class() {
            return il2cpp::get_class<app::UberIDOwnerSO__Array__Class>(type_info(), "Moon", "UberIDOwnerSO[]");
        }
        inline app::UberIDOwnerSO__Array* create() {
            return il2cpp::create_object<app::UberIDOwnerSO__Array>(get_class());
        }
    } // namespace UberIDOwnerSO__Array
} // namespace app::classes::types
