#pragma once
#include <Modloader/app/structs/SpiderBossIntroBehaviour.h>
#include <Modloader/app/structs/SpiderBossIntroBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossIntroBehaviour {
        inline app::SpiderBossIntroBehaviour__Class** type_info() {
            static app::SpiderBossIntroBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossIntroBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossIntroBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossIntroBehaviour__Class>(type_info(), "", "SpiderBossIntroBehaviour");
        }
        inline app::SpiderBossIntroBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossIntroBehaviour>(get_class());
        }
    } // namespace SpiderBossIntroBehaviour
} // namespace app::classes::types
