#pragma once
#include <Modloader/app/structs/KwolokAttackCategory__Enum.h>
#include <Modloader/app/structs/KwolokAttackCategory__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokAttackCategory__Enum {
        inline app::KwolokAttackCategory__Enum__Class** type_info() {
            static app::KwolokAttackCategory__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokAttackCategory__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokAttackCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::KwolokAttackCategory__Enum__Class>(type_info(), "", "KwolokAttackCategory");
        }
        inline app::KwolokAttackCategory__Enum* create() {
            return il2cpp::create_object<app::KwolokAttackCategory__Enum>(get_class());
        }
    } // namespace KwolokAttackCategory__Enum
} // namespace app::classes::types
