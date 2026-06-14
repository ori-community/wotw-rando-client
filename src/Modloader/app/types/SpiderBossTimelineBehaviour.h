#pragma once
#include <Modloader/app/structs/SpiderBossTimelineBehaviour.h>
#include <Modloader/app/structs/SpiderBossTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossTimelineBehaviour {
        inline app::SpiderBossTimelineBehaviour__Class** type_info() {
            static app::SpiderBossTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossTimelineBehaviour__Class>(type_info(), "", "SpiderBossTimelineBehaviour");
        }
        inline app::SpiderBossTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossTimelineBehaviour>(get_class());
        }
    } // namespace SpiderBossTimelineBehaviour
} // namespace app::classes::types
