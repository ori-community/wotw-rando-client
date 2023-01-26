#pragma once
#include <Modloader/app/structs/SkeetoDiveAttackBehaviour.h>
#include <Modloader/app/structs/SkeetoDiveAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoDiveAttackBehaviour {
        inline app::SkeetoDiveAttackBehaviour__Class** type_info() {
            static app::SkeetoDiveAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoDiveAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoDiveAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoDiveAttackBehaviour__Class>(type_info(), "", "SkeetoDiveAttackBehaviour");
        }
        inline app::SkeetoDiveAttackBehaviour* create() {
            return il2cpp::create_object<app::SkeetoDiveAttackBehaviour>(get_class());
        }
    } // namespace SkeetoDiveAttackBehaviour
} // namespace app::classes::types
