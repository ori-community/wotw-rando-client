#pragma once
#include <Modloader/app/structs/KuCrouch.h>
#include <Modloader/app/structs/KuCrouch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuCrouch {
        inline app::KuCrouch__Class** type_info() {
            static app::KuCrouch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuCrouch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuCrouch__Class* get_class() {
            return il2cpp::get_class<app::KuCrouch__Class>(type_info(), "", "KuCrouch");
        }
        inline app::KuCrouch* create() {
            return il2cpp::create_object<app::KuCrouch>(get_class());
        }
    } // namespace KuCrouch
} // namespace app::classes::types
