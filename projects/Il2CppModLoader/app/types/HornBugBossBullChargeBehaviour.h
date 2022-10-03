#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugBossBullChargeBehaviour {
        namespace {
            app::HornBugBossBullChargeBehaviour__Class* type_info_ref = nullptr;
        }
        app::HornBugBossBullChargeBehaviour__Class** type_info = &type_info_ref;
        inline app::HornBugBossBullChargeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossBullChargeBehaviour__Class>(type_info, "", "HornBugBossBullChargeBehaviour");
        }
        inline app::HornBugBossBullChargeBehaviour* create() {
            return il2cpp::create_object<app::HornBugBossBullChargeBehaviour>(get_class());
        }
    } // namespace HornBugBossBullChargeBehaviour
} // namespace app::classes::types
