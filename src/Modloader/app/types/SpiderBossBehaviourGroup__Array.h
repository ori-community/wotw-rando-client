#pragma once
#include <Modloader/app/structs/SpiderBossBehaviourGroup__Array.h>
#include <Modloader/app/structs/SpiderBossBehaviourGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossBehaviourGroup__Array {
        inline app::SpiderBossBehaviourGroup__Array__Class** type_info() {
            static app::SpiderBossBehaviourGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossBehaviourGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossBehaviourGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBehaviourGroup__Array__Class>(type_info(), "", "SpiderBossBehaviourGroup[]");
        }
        inline app::SpiderBossBehaviourGroup__Array* create() {
            return il2cpp::create_object<app::SpiderBossBehaviourGroup__Array>(get_class());
        }
    } // namespace SpiderBossBehaviourGroup__Array
} // namespace app::classes::types
