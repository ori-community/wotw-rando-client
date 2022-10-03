#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossBehaviourZones_ZoneAndState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossBehaviourZones_ZoneAndState__Class** type_info;
        inline app::KwolokBossBehaviourZones_ZoneAndState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossBehaviourZones_ZoneAndState__Class>(type_info, "", "KwolokBossBehaviourZones", "ZoneAndState");
        }
        inline app::KwolokBossBehaviourZones_ZoneAndState* create() {
            return il2cpp::create_object<app::KwolokBossBehaviourZones_ZoneAndState>(get_class());
        }
        inline app::KwolokBossBehaviourZones_ZoneAndState__Array* create_array(int size) {
            return il2cpp::array_new<app::KwolokBossBehaviourZones_ZoneAndState__Array>(get_class(), size);
        }
    } // namespace KwolokBossBehaviourZones_ZoneAndState
} // namespace app::classes::types
