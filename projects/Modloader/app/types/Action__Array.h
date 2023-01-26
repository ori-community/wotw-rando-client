#pragma once
#include <Modloader/app/structs/Action__Array.h>
#include <Modloader/app/structs/Action__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Action__Array {
        inline app::Action__Array__Class** type_info() {
            static app::Action__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Action__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Action__Array__Class* get_class() {
            return il2cpp::get_class<app::Action__Array__Class>(type_info(), "System", "Action[]");
        }
        inline app::Action__Array* create() {
            return il2cpp::create_object<app::Action__Array>(get_class());
        }
    } // namespace Action__Array
} // namespace app::classes::types
