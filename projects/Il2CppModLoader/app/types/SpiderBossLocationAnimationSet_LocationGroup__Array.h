#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationAnimationSet_LocationGroup__Array {
        namespace {
            app::SpiderBossLocationAnimationSet_LocationGroup__Array__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocationAnimationSet_LocationGroup__Array__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationAnimationSet_LocationGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationAnimationSet_LocationGroup__Array__Class>(type_info, "", "SpiderBossLocationAnimationSet+LocationGroup[]");
        }
        inline app::SpiderBossLocationAnimationSet_LocationGroup__Array* create() {
            return il2cpp::create_object<app::SpiderBossLocationAnimationSet_LocationGroup__Array>(get_class());
        }
    } // namespace SpiderBossLocationAnimationSet_LocationGroup__Array
} // namespace app::classes::types
