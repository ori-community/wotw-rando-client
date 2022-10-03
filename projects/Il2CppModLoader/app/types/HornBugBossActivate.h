#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugBossActivate {
        namespace {
            app::HornBugBossActivate__Class* type_info_ref = nullptr;
        }
        app::HornBugBossActivate__Class** type_info = &type_info_ref;
        inline app::HornBugBossActivate__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossActivate__Class>(type_info, "", "HornBugBossActivate");
        }
        inline app::HornBugBossActivate* create() {
            return il2cpp::create_object<app::HornBugBossActivate>(get_class());
        }
    } // namespace HornBugBossActivate
} // namespace app::classes::types
