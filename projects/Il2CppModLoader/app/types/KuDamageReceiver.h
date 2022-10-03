#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuDamageReceiver {
        namespace {
            app::KuDamageReceiver__Class* type_info_ref = nullptr;
        }
        app::KuDamageReceiver__Class** type_info = &type_info_ref;
        inline app::KuDamageReceiver__Class* get_class() {
            return il2cpp::get_class<app::KuDamageReceiver__Class>(type_info, "", "KuDamageReceiver");
        }
        inline app::KuDamageReceiver* create() {
            return il2cpp::create_object<app::KuDamageReceiver>(get_class());
        }
    } // namespace KuDamageReceiver
} // namespace app::classes::types
