#pragma once
#include <Modloader/app/structs/KwolokBossBehaviourZones.h>
#include <Modloader/app/structs/KwolokBossBehaviourZones__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossBehaviourZones {
        inline app::KwolokBossBehaviourZones__Class** type_info() {
            static app::KwolokBossBehaviourZones__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossBehaviourZones__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossBehaviourZones__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossBehaviourZones__Class>(type_info(), "", "KwolokBossBehaviourZones");
        }
        inline app::KwolokBossBehaviourZones* create() {
            return il2cpp::create_object<app::KwolokBossBehaviourZones>(get_class());
        }
    } // namespace KwolokBossBehaviourZones
} // namespace app::classes::types
