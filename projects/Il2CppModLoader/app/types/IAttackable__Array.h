#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAttackable__Array {
        namespace {
            app::IAttackable__Array__Class* type_info_ref = nullptr;
        }
        app::IAttackable__Array__Class** type_info = &type_info_ref;
        inline app::IAttackable__Array__Class* get_class() {
            return il2cpp::get_class<app::IAttackable__Array__Class>(type_info, "", "IAttackable[]");
        }
        inline app::IAttackable__Array* create() {
            return il2cpp::create_object<app::IAttackable__Array>(get_class());
        }
    } // namespace IAttackable__Array
} // namespace app::classes::types
