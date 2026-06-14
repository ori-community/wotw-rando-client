#pragma once
#include <Modloader/app/structs/SpiderBossLocationTimelineBehaviour.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationTimelineBehaviour {
        inline app::SpiderBossLocationTimelineBehaviour__Class** type_info() {
            static app::SpiderBossLocationTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocationTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocationTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationTimelineBehaviour__Class>(type_info(), "", "SpiderBossLocationTimelineBehaviour");
        }
        inline app::SpiderBossLocationTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocationTimelineBehaviour>(get_class());
        }
    } // namespace SpiderBossLocationTimelineBehaviour
} // namespace app::classes::types
