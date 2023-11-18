#pragma once
#include <Modloader/app/structs/IAttackable__Array.h>
#include <Modloader/app/structs/IAttackable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAttackable__Array {
        inline app::IAttackable__Array__Class** type_info() {
            static app::IAttackable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IAttackable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IAttackable__Array__Class* get_class() {
            return il2cpp::get_class<app::IAttackable__Array__Class>(type_info(), "", "IAttackable[]");
        }
        inline app::IAttackable__Array* create() {
            return il2cpp::create_object<app::IAttackable__Array>(get_class());
        }
    } // namespace IAttackable__Array
} // namespace app::classes::types
