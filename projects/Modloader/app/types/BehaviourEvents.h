#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BehaviourEvents__Class.h>
#include <Modloader/app/structs/BehaviourEvents.h>

namespace app::classes::types {
    namespace BehaviourEvents {
        inline app::BehaviourEvents__Class** type_info = (app::BehaviourEvents__Class**)(modloader::win::memory::resolve_rva(0x04770658));
        inline app::BehaviourEvents__Class* get_class() {
            return il2cpp::get_class<app::BehaviourEvents__Class>(type_info, "UberBehaviourTree", "BehaviourEvents");
        }
        inline app::BehaviourEvents* create() {
            return il2cpp::create_object<app::BehaviourEvents>(get_class());
        }
    } // namespace BehaviourEvents
} // namespace app::classes::types
