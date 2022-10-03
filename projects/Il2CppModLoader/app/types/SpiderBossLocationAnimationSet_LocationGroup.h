#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationAnimationSet_LocationGroup {
        namespace {
            app::SpiderBossLocationAnimationSet_LocationGroup__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocationAnimationSet_LocationGroup__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationAnimationSet_LocationGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossLocationAnimationSet_LocationGroup__Class>(type_info, "", "SpiderBossLocationAnimationSet", "LocationGroup");
        }
        inline app::SpiderBossLocationAnimationSet_LocationGroup* create() {
            return il2cpp::create_object<app::SpiderBossLocationAnimationSet_LocationGroup>(get_class());
        }
        inline app::SpiderBossLocationAnimationSet_LocationGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossLocationAnimationSet_LocationGroup__Array>(get_class(), size);
        }
    } // namespace SpiderBossLocationAnimationSet_LocationGroup
} // namespace app::classes::types
