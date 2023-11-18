#pragma once
#include <Modloader/app/structs/SpiderBossLocationTurningTimelineBehaviour.h>
#include <Modloader/app/structs/SpiderBossLocationTurningTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationTurningTimelineBehaviour {
        inline app::SpiderBossLocationTurningTimelineBehaviour__Class** type_info() {
            static app::SpiderBossLocationTurningTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocationTurningTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocationTurningTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationTurningTimelineBehaviour__Class>(type_info(), "", "SpiderBossLocationTurningTimelineBehaviour");
        }
        inline app::SpiderBossLocationTurningTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocationTurningTimelineBehaviour>(get_class());
        }
    } // namespace SpiderBossLocationTurningTimelineBehaviour
} // namespace app::classes::types
