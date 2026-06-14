#pragma once
#include <Modloader/app/structs/EnemyStopper__Array.h>
#include <Modloader/app/structs/EnemyStopper__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyStopper__Array {
        inline app::EnemyStopper__Array__Class** type_info() {
            static app::EnemyStopper__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyStopper__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyStopper__Array__Class* get_class() {
            return il2cpp::get_class<app::EnemyStopper__Array__Class>(type_info(), "", "EnemyStopper[]");
        }
        inline app::EnemyStopper__Array* create() {
            return il2cpp::create_object<app::EnemyStopper__Array>(get_class());
        }
    } // namespace EnemyStopper__Array
} // namespace app::classes::types
