#pragma once
#include <Modloader/app/structs/Challenge__Array.h>
#include <Modloader/app/structs/Challenge__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Challenge__Array {
        inline app::Challenge__Array__Class** type_info() {
            static app::Challenge__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Challenge__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Challenge__Array__Class* get_class() {
            return il2cpp::get_class<app::Challenge__Array__Class>(type_info(), "", "Challenge[]");
        }
        inline app::Challenge__Array* create() {
            return il2cpp::create_object<app::Challenge__Array>(get_class());
        }
    } // namespace Challenge__Array
} // namespace app::classes::types
