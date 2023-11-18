#pragma once
#include <Modloader/app/structs/StressTester__Array.h>
#include <Modloader/app/structs/StressTester__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StressTester__Array {
        inline app::StressTester__Array__Class** type_info() {
            static app::StressTester__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StressTester__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StressTester__Array__Class* get_class() {
            return il2cpp::get_class<app::StressTester__Array__Class>(type_info(), "", "StressTester[]");
        }
        inline app::StressTester__Array* create() {
            return il2cpp::create_object<app::StressTester__Array>(get_class());
        }
    } // namespace StressTester__Array
} // namespace app::classes::types
