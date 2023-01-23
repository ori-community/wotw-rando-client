#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Blackboard_BlackboardMoonTypes__Class.h>
#include <Modloader/app/structs/Blackboard_BlackboardMoonTypes.h>

namespace app::classes::types {
    namespace Blackboard_BlackboardMoonTypes {
        inline app::Blackboard_BlackboardMoonTypes__Class** type_info = (app::Blackboard_BlackboardMoonTypes__Class**)(modloader::win::memory::resolve_rva(0x04703420));
        inline app::Blackboard_BlackboardMoonTypes__Class* get_class() {
            return il2cpp::get_nested_class<app::Blackboard_BlackboardMoonTypes__Class>(type_info, "Moon.BehaviourSystem", "Blackboard", "BlackboardMoonTypes");
        }
        inline app::Blackboard_BlackboardMoonTypes* create() {
            return il2cpp::create_object<app::Blackboard_BlackboardMoonTypes>(get_class());
        }
    } // namespace Blackboard_BlackboardMoonTypes
} // namespace app::classes::types
