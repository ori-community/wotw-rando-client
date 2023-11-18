#pragma once
#include <Modloader/app/structs/SpiderBossLocationAnimationSet_LocationGroup__Array.h>
#include <Modloader/app/structs/SpiderBossLocationAnimationSet_LocationGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationAnimationSet_LocationGroup__Array {
        inline app::SpiderBossLocationAnimationSet_LocationGroup__Array__Class** type_info() {
            static app::SpiderBossLocationAnimationSet_LocationGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocationAnimationSet_LocationGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocationAnimationSet_LocationGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationAnimationSet_LocationGroup__Array__Class>(type_info(), "", "SpiderBossLocationAnimationSet+LocationGroup[]");
        }
        inline app::SpiderBossLocationAnimationSet_LocationGroup__Array* create() {
            return il2cpp::create_object<app::SpiderBossLocationAnimationSet_LocationGroup__Array>(get_class());
        }
    } // namespace SpiderBossLocationAnimationSet_LocationGroup__Array
} // namespace app::classes::types
