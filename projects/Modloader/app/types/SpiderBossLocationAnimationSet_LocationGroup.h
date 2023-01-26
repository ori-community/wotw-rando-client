#pragma once
#include <Modloader/app/structs/SpiderBossLocationAnimationSet_LocationGroup.h>
#include <Modloader/app/structs/SpiderBossLocationAnimationSet_LocationGroup__Array.h>
#include <Modloader/app/structs/SpiderBossLocationAnimationSet_LocationGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationAnimationSet_LocationGroup {
        inline app::SpiderBossLocationAnimationSet_LocationGroup__Class** type_info() {
            static app::SpiderBossLocationAnimationSet_LocationGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocationAnimationSet_LocationGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocationAnimationSet_LocationGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossLocationAnimationSet_LocationGroup__Class>(type_info(), "", "SpiderBossLocationAnimationSet", "LocationGroup");
        }
        inline app::SpiderBossLocationAnimationSet_LocationGroup* create() {
            return il2cpp::create_object<app::SpiderBossLocationAnimationSet_LocationGroup>(get_class());
        }
        inline app::SpiderBossLocationAnimationSet_LocationGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossLocationAnimationSet_LocationGroup__Array>(get_class(), size);
        }
        inline app::SpiderBossLocationAnimationSet_LocationGroup__Array* create_array(const std::vector<app::SpiderBossLocationAnimationSet_LocationGroup*>& items) {
            return il2cpp::array_new<app::SpiderBossLocationAnimationSet_LocationGroup__Array>(get_class(), items);
        }
    } // namespace SpiderBossLocationAnimationSet_LocationGroup
} // namespace app::classes::types
