#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroundAreaPatrolBehaviourNew_c__Class.h>
#include <Modloader/app/structs/GroundAreaPatrolBehaviourNew_c.h>

namespace app::classes::types {
    namespace GroundAreaPatrolBehaviourNew_c {
        inline app::GroundAreaPatrolBehaviourNew_c__Class** type_info = (app::GroundAreaPatrolBehaviourNew_c__Class**)(modloader::win::memory::resolve_rva(0x04769580));
        inline app::GroundAreaPatrolBehaviourNew_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundAreaPatrolBehaviourNew_c__Class>(type_info, "Moon", "GroundAreaPatrolBehaviourNew", "<>c");
        }
        inline app::GroundAreaPatrolBehaviourNew_c* create() {
            return il2cpp::create_object<app::GroundAreaPatrolBehaviourNew_c>(get_class());
        }
    } // namespace GroundAreaPatrolBehaviourNew_c
} // namespace app::classes::types
