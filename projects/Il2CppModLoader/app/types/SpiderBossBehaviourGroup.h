#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossBehaviourGroup {
        namespace {
            inline app::SpiderBossBehaviourGroup__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossBehaviourGroup__Class** type_info = &type_info_ref;
        inline app::SpiderBossBehaviourGroup__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBehaviourGroup__Class>(type_info, "", "SpiderBossBehaviourGroup");
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
