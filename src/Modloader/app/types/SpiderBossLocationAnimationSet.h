#pragma once
#include <Modloader/app/structs/SpiderBossLocationAnimationSet.h>
#include <Modloader/app/structs/SpiderBossLocationAnimationSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationAnimationSet {
        inline app::SpiderBossLocationAnimationSet__Class** type_info() {
            static app::SpiderBossLocationAnimationSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocationAnimationSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocationAnimationSet__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationAnimationSet__Class>(type_info(), "", "SpiderBossLocationAnimationSet");
        }
        inline app::SpiderBossLocationAnimationSet* create() {
            return il2cpp::create_object<app::SpiderBossLocationAnimationSet>(get_class());
        }
    } // namespace SpiderBossLocationAnimationSet
} // namespace app::classes::types
