#pragma once
#include <Modloader/app/structs/HornBugBossBullChargeBehaviour.h>
#include <Modloader/app/structs/HornBugBossBullChargeBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugBossBullChargeBehaviour {
        inline app::HornBugBossBullChargeBehaviour__Class** type_info() {
            static app::HornBugBossBullChargeBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugBossBullChargeBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugBossBullChargeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossBullChargeBehaviour__Class>(type_info(), "", "HornBugBossBullChargeBehaviour");
        }
        inline app::HornBugBossBullChargeBehaviour* create() {
            return il2cpp::create_object<app::HornBugBossBullChargeBehaviour>(get_class());
        }
    } // namespace HornBugBossBullChargeBehaviour
} // namespace app::classes::types
