#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossBehaviourZones_ZoneAndState {
        inline app::KwolokBossBehaviourZones_ZoneAndState__Class** type_info = (app::KwolokBossBehaviourZones_ZoneAndState__Class**)(modloader::win::memory::resolve_rva(0x047556B0));
        inline app::KwolokBossBehaviourZones_ZoneAndState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossBehaviourZones_ZoneAndState__Class>(type_info, "", "KwolokBossBehaviourZones", "ZoneAndState");
        }
        inline app::KwolokBossBehaviourZones_ZoneAndState* create() {
            return il2cpp::create_object<app::KwolokBossBehaviourZones_ZoneAndState>(get_class());
        }
        inline app::KwolokBossBehaviourZones_ZoneAndState__Array* create_array(int size) {
            return il2cpp::array_new<app::KwolokBossBehaviourZones_ZoneAndState__Array>(get_class(), size);
        }
        inline app::KwolokBossBehaviourZones_ZoneAndState__Array* create_array(const std::vector<app::KwolokBossBehaviourZones_ZoneAndState*>& items) {
            return il2cpp::array_new<app::KwolokBossBehaviourZones_ZoneAndState__Array>(get_class(), items);
        }
    } // namespace KwolokBossBehaviourZones_ZoneAndState
} // namespace app::classes::types
