#pragma once
#include <Modloader/app/structs/SwitchCase__Array.h>
#include <Modloader/app/structs/SwitchCase__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchCase__Array {
        inline app::SwitchCase__Array__Class** type_info() {
            static app::SwitchCase__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwitchCase__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwitchCase__Array__Class* get_class() {
            return il2cpp::get_class<app::SwitchCase__Array__Class>(type_info(), "System.Linq.Expressions", "SwitchCase[]");
        }
        inline app::SwitchCase__Array* create() {
            return il2cpp::create_object<app::SwitchCase__Array>(get_class());
        }
    } // namespace SwitchCase__Array
} // namespace app::classes::types
