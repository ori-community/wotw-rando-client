#pragma once
#include <Modloader/app/structs/Rail__Array.h>
#include <Modloader/app/structs/Rail__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Rail__Array {
        inline app::Rail__Array__Class** type_info() {
            static app::Rail__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Rail__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Rail__Array__Class* get_class() {
            return il2cpp::get_class<app::Rail__Array__Class>(type_info(), "", "Rail[]");
        }
        inline app::Rail__Array* create() {
            return il2cpp::create_object<app::Rail__Array>(get_class());
        }
    } // namespace Rail__Array
} // namespace app::classes::types
