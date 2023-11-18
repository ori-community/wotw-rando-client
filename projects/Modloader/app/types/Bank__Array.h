#pragma once
#include <Modloader/app/structs/Bank__Array.h>
#include <Modloader/app/structs/Bank__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Bank__Array {
        inline app::Bank__Array__Class** type_info() {
            static app::Bank__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Bank__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Bank__Array__Class* get_class() {
            return il2cpp::get_class<app::Bank__Array__Class>(type_info(), "AK.Wwise", "Bank[]");
        }
        inline app::Bank__Array* create() {
            return il2cpp::create_object<app::Bank__Array>(get_class());
        }
    } // namespace Bank__Array
} // namespace app::classes::types
