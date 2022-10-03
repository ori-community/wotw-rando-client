#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugBossDeathBehaviour {
        namespace {
            app::HornBugBossDeathBehaviour__Class* type_info_ref = nullptr;
        }
        app::HornBugBossDeathBehaviour__Class** type_info = &type_info_ref;
        inline app::HornBugBossDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossDeathBehaviour__Class>(type_info, "", "HornBugBossDeathBehaviour");
        }
        inline app::HornBugBossDeathBehaviour* create() {
            return il2cpp::create_object<app::HornBugBossDeathBehaviour>(get_class());
        }
    } // namespace HornBugBossDeathBehaviour
} // namespace app::classes::types
