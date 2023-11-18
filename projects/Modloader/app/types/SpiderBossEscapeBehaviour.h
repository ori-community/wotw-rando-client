#pragma once
#include <Modloader/app/structs/SpiderBossEscapeBehaviour.h>
#include <Modloader/app/structs/SpiderBossEscapeBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossEscapeBehaviour {
        inline app::SpiderBossEscapeBehaviour__Class** type_info() {
            static app::SpiderBossEscapeBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossEscapeBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossEscapeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossEscapeBehaviour__Class>(type_info(), "", "SpiderBossEscapeBehaviour");
        }
        inline app::SpiderBossEscapeBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossEscapeBehaviour>(get_class());
        }
    } // namespace SpiderBossEscapeBehaviour
} // namespace app::classes::types
