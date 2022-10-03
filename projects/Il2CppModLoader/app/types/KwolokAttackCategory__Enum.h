#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokAttackCategory__Enum {
        namespace {
            app::KwolokAttackCategory__Enum__Class* type_info_ref = nullptr;
        }
        app::KwolokAttackCategory__Enum__Class** type_info = &type_info_ref;
        inline app::KwolokAttackCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::KwolokAttackCategory__Enum__Class>(type_info, "", "KwolokAttackCategory");
        }
        inline app::KwolokAttackCategory__Enum* create() {
            return il2cpp::create_object<app::KwolokAttackCategory__Enum>(get_class());
        }
    } // namespace KwolokAttackCategory__Enum
} // namespace app::classes::types
