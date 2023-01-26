#pragma once
#include <Modloader/app/structs/KwolokBossBehaviourZones_ZoneAndState__Array.h>
#include <Modloader/app/structs/KwolokBossBehaviourZones_ZoneAndState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossBehaviourZones_ZoneAndState__Array {
        inline app::KwolokBossBehaviourZones_ZoneAndState__Array__Class** type_info() {
            static app::KwolokBossBehaviourZones_ZoneAndState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossBehaviourZones_ZoneAndState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossBehaviourZones_ZoneAndState__Array__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossBehaviourZones_ZoneAndState__Array__Class>(type_info(), "", "KwolokBossBehaviourZones+ZoneAndState[]");
        }
        inline app::KwolokBossBehaviourZones_ZoneAndState__Array* create() {
            return il2cpp::create_object<app::KwolokBossBehaviourZones_ZoneAndState__Array>(get_class());
        }
    } // namespace KwolokBossBehaviourZones_ZoneAndState__Array
} // namespace app::classes::types
