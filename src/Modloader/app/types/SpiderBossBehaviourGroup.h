#pragma once
#include <Modloader/app/structs/SpiderBossBehaviourGroup.h>
#include <Modloader/app/structs/SpiderBossBehaviourGroup__Array.h>
#include <Modloader/app/structs/SpiderBossBehaviourGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossBehaviourGroup {
        inline app::SpiderBossBehaviourGroup__Class** type_info() {
            static app::SpiderBossBehaviourGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossBehaviourGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossBehaviourGroup__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBehaviourGroup__Class>(type_info(), "", "SpiderBossBehaviourGroup");
        }
        inline app::SpiderBossBehaviourGroup* create() {
            return il2cpp::create_object<app::SpiderBossBehaviourGroup>(get_class());
        }
        inline app::SpiderBossBehaviourGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossBehaviourGroup__Array>(get_class(), size);
        }
        inline app::SpiderBossBehaviourGroup__Array* create_array(const std::vector<app::SpiderBossBehaviourGroup*>& items) {
            return il2cpp::array_new<app::SpiderBossBehaviourGroup__Array>(get_class(), items);
        }
    } // namespace SpiderBossBehaviourGroup
} // namespace app::classes::types
