#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroundAreaPatrolBehaviourNew__Class.h>
#include <Modloader/app/structs/GroundAreaPatrolBehaviourNew.h>

namespace app::classes::types {
    namespace GroundAreaPatrolBehaviourNew {
        namespace {
            inline app::GroundAreaPatrolBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::GroundAreaPatrolBehaviourNew__Class** type_info = &type_info_ref;
        inline app::GroundAreaPatrolBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundAreaPatrolBehaviourNew__Class>(type_info, "Moon", "GroundAreaPatrolBehaviourNew");
        }
        inline app::GroundAreaPatrolBehaviourNew* create() {
            return il2cpp::create_object<app::GroundAreaPatrolBehaviourNew>(get_class());
        }
    } // namespace GroundAreaPatrolBehaviourNew
} // namespace app::classes::types
