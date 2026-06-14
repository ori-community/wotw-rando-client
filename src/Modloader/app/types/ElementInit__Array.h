#pragma once
#include <Modloader/app/structs/ElementInit__Array.h>
#include <Modloader/app/structs/ElementInit__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ElementInit__Array {
        inline app::ElementInit__Array__Class** type_info() {
            static app::ElementInit__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ElementInit__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ElementInit__Array__Class* get_class() {
            return il2cpp::get_class<app::ElementInit__Array__Class>(type_info(), "System.Linq.Expressions", "ElementInit[]");
        }
        inline app::ElementInit__Array* create() {
            return il2cpp::create_object<app::ElementInit__Array>(get_class());
        }
    } // namespace ElementInit__Array
} // namespace app::classes::types
