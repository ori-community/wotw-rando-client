#pragma once
#include <Modloader/app/structs/LockOnTarget.h>
#include <Modloader/app/structs/LockOnTarget__Array.h>
#include <Modloader/app/structs/LockOnTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LockOnTarget {
        inline app::LockOnTarget__Class** type_info() {
            static app::LockOnTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LockOnTarget__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LockOnTarget__Class* get_class() {
            return il2cpp::get_class<app::LockOnTarget__Class>(type_info(), "", "LockOnTarget");
        }
        inline app::LockOnTarget* create() {
            return il2cpp::create_object<app::LockOnTarget>(get_class());
        }
        inline app::LockOnTarget__Array* create_array(int size) {
            return il2cpp::array_new<app::LockOnTarget__Array>(get_class(), size);
        }
        inline app::LockOnTarget__Array* create_array(const std::vector<app::LockOnTarget*>& items) {
            return il2cpp::array_new<app::LockOnTarget__Array>(get_class(), items);
        }
    } // namespace LockOnTarget
} // namespace app::classes::types
