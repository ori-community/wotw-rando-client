#pragma once
#include <Modloader/app/structs/SpiderBossTurningTimelineBehaviour.h>
#include <Modloader/app/structs/SpiderBossTurningTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossTurningTimelineBehaviour {
        inline app::SpiderBossTurningTimelineBehaviour__Class** type_info() {
            static app::SpiderBossTurningTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossTurningTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossTurningTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossTurningTimelineBehaviour__Class>(type_info(), "", "SpiderBossTurningTimelineBehaviour");
        }
        inline app::SpiderBossTurningTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossTurningTimelineBehaviour>(get_class());
        }
    } // namespace SpiderBossTurningTimelineBehaviour
} // namespace app::classes::types
