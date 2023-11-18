#pragma once
#include <Modloader/app/structs/KuDash.h>
#include <Modloader/app/structs/KuDash__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuDash {
        inline app::KuDash__Class** type_info() {
            static app::KuDash__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuDash__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuDash__Class* get_class() {
            return il2cpp::get_class<app::KuDash__Class>(type_info(), "", "KuDash");
        }
        inline app::KuDash* create() {
            return il2cpp::create_object<app::KuDash>(get_class());
        }
    } // namespace KuDash
} // namespace app::classes::types
