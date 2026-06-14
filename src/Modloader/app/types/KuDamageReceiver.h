#pragma once
#include <Modloader/app/structs/KuDamageReceiver.h>
#include <Modloader/app/structs/KuDamageReceiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuDamageReceiver {
        inline app::KuDamageReceiver__Class** type_info() {
            static app::KuDamageReceiver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuDamageReceiver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuDamageReceiver__Class* get_class() {
            return il2cpp::get_class<app::KuDamageReceiver__Class>(type_info(), "", "KuDamageReceiver");
        }
        inline app::KuDamageReceiver* create() {
            return il2cpp::create_object<app::KuDamageReceiver>(get_class());
        }
    } // namespace KuDamageReceiver
} // namespace app::classes::types
