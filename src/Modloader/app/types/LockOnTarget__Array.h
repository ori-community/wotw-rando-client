#pragma once
#include <Modloader/app/structs/LockOnTarget__Array.h>
#include <Modloader/app/structs/LockOnTarget__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LockOnTarget__Array {
        inline app::LockOnTarget__Array__Class** type_info() {
            static app::LockOnTarget__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LockOnTarget__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LockOnTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::LockOnTarget__Array__Class>(type_info(), "", "LockOnTarget[]");
        }
        inline app::LockOnTarget__Array* create() {
            return il2cpp::create_object<app::LockOnTarget__Array>(get_class());
        }
    } // namespace LockOnTarget__Array
} // namespace app::classes::types
