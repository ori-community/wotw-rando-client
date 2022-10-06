#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossBehaviourZone__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderBossBehaviourZone__Enum__Class** type_info;
        inline app::SpiderBossBehaviourZone__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBehaviourZone__Enum__Class>(type_info, "", "SpiderBossBehaviourZone");
        }
        inline app::SpiderBossBehaviourZone__Enum* create() {
            return il2cpp::create_object<app::SpiderBossBehaviourZone__Enum>(get_class());
        }
        inline app::SpiderBossBehaviourZone__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossBehaviourZone__Enum__Array>(get_class(), size);
        }
        inline app::SpiderBossBehaviourZone__Enum__Array* create_array(const std::vector<app::SpiderBossBehaviourZone__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::SpiderBossBehaviourZone__Enum__Array>(get_class(), items);
        }
    } // namespace SpiderBossBehaviourZone__Enum
} // namespace app::classes::types
