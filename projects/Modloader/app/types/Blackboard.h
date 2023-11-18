#pragma once
#include <Modloader/app/structs/Blackboard.h>
#include <Modloader/app/structs/Blackboard__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Blackboard {
        inline app::Blackboard__Class** type_info() {
            static app::Blackboard__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Blackboard__Class**)(modloader::win::memory::resolve_rva(0x04734270));
            }
            return cache;
        }
        inline app::Blackboard__Class* get_class() {
            return il2cpp::get_class<app::Blackboard__Class>(type_info(), "Moon.BehaviourSystem", "Blackboard");
        }
        inline app::Blackboard* create() {
            return il2cpp::create_object<app::Blackboard>(get_class());
        }
    } // namespace Blackboard
} // namespace app::classes::types
