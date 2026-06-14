#pragma once
#include <Modloader/app/structs/KuFall.h>
#include <Modloader/app/structs/KuFall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuFall {
        inline app::KuFall__Class** type_info() {
            static app::KuFall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuFall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuFall__Class* get_class() {
            return il2cpp::get_class<app::KuFall__Class>(type_info(), "", "KuFall");
        }
        inline app::KuFall* create() {
            return il2cpp::create_object<app::KuFall>(get_class());
        }
    } // namespace KuFall
} // namespace app::classes::types
