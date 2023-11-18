#pragma once
#include <Modloader/app/structs/KuAbilities.h>
#include <Modloader/app/structs/KuAbilities__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuAbilities {
        inline app::KuAbilities__Class** type_info() {
            static app::KuAbilities__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuAbilities__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuAbilities__Class* get_class() {
            return il2cpp::get_class<app::KuAbilities__Class>(type_info(), "", "KuAbilities");
        }
        inline app::KuAbilities* create() {
            return il2cpp::create_object<app::KuAbilities>(get_class());
        }
    } // namespace KuAbilities
} // namespace app::classes::types
