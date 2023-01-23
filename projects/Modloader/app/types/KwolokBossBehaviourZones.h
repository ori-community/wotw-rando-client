#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossBehaviourZones__Class.h>
#include <Modloader/app/structs/KwolokBossBehaviourZones.h>

namespace app::classes::types {
    namespace KwolokBossBehaviourZones {
        namespace {
            inline app::KwolokBossBehaviourZones__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossBehaviourZones__Class** type_info = &type_info_ref;
        inline app::KwolokBossBehaviourZones__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossBehaviourZones__Class>(type_info, "", "KwolokBossBehaviourZones");
        }
        inline app::KwolokBossBehaviourZones* create() {
            return il2cpp::create_object<app::KwolokBossBehaviourZones>(get_class());
        }
    } // namespace KwolokBossBehaviourZones
} // namespace app::classes::types
