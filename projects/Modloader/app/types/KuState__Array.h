#pragma once
#include <Modloader/app/structs/KuState__Array.h>
#include <Modloader/app/structs/KuState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuState__Array {
        inline app::KuState__Array__Class** type_info() {
            static app::KuState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuState__Array__Class* get_class() {
            return il2cpp::get_class<app::KuState__Array__Class>(type_info(), "", "KuState[]");
        }
        inline app::KuState__Array* create() {
            return il2cpp::create_object<app::KuState__Array>(get_class());
        }
    } // namespace KuState__Array
} // namespace app::classes::types
