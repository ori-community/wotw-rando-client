#pragma once
#include <Modloader/app/structs/HornBugBossTimelineBehaviour.h>
#include <Modloader/app/structs/HornBugBossTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugBossTimelineBehaviour {
        inline app::HornBugBossTimelineBehaviour__Class** type_info() {
            static app::HornBugBossTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugBossTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugBossTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossTimelineBehaviour__Class>(type_info(), "", "HornBugBossTimelineBehaviour");
        }
        inline app::HornBugBossTimelineBehaviour* create() {
            return il2cpp::create_object<app::HornBugBossTimelineBehaviour>(get_class());
        }
    } // namespace HornBugBossTimelineBehaviour
} // namespace app::classes::types
