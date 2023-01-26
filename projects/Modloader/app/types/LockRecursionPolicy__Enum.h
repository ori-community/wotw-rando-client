#pragma once
#include <Modloader/app/structs/LockRecursionPolicy__Enum.h>
#include <Modloader/app/structs/LockRecursionPolicy__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LockRecursionPolicy__Enum {
        inline app::LockRecursionPolicy__Enum__Class** type_info() {
            static app::LockRecursionPolicy__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LockRecursionPolicy__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LockRecursionPolicy__Enum__Class* get_class() {
            return il2cpp::get_class<app::LockRecursionPolicy__Enum__Class>(type_info(), "System.Threading", "LockRecursionPolicy");
        }
        inline app::LockRecursionPolicy__Enum* create() {
            return il2cpp::create_object<app::LockRecursionPolicy__Enum>(get_class());
        }
    } // namespace LockRecursionPolicy__Enum
} // namespace app::classes::types
