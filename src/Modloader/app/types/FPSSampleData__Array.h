#pragma once
#include <Modloader/app/structs/FPSSampleData__Array.h>
#include <Modloader/app/structs/FPSSampleData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSSampleData__Array {
        inline app::FPSSampleData__Array__Class** type_info() {
            static app::FPSSampleData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FPSSampleData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FPSSampleData__Array__Class* get_class() {
            return il2cpp::get_class<app::FPSSampleData__Array__Class>(type_info(), "", "FPSSampleData[]");
        }
        inline app::FPSSampleData__Array* create() {
            return il2cpp::create_object<app::FPSSampleData__Array>(get_class());
        }
    } // namespace FPSSampleData__Array
} // namespace app::classes::types
