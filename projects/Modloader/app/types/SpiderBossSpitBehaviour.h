#pragma once
#include <Modloader/app/structs/SpiderBossSpitBehaviour.h>
#include <Modloader/app/structs/SpiderBossSpitBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossSpitBehaviour {
        inline app::SpiderBossSpitBehaviour__Class** type_info() {
            static app::SpiderBossSpitBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossSpitBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossSpitBehaviour__Class>(type_info(), "", "SpiderBossSpitBehaviour");
        }
        inline app::SpiderBossSpitBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossSpitBehaviour>(get_class());
        }
    } // namespace SpiderBossSpitBehaviour
} // namespace app::classes::types
