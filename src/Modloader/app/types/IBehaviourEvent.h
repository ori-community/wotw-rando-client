#pragma once
#include <Modloader/app/structs/IBehaviourEvent.h>
#include <Modloader/app/structs/IBehaviourEvent__Array.h>
#include <Modloader/app/structs/IBehaviourEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBehaviourEvent {
        inline app::IBehaviourEvent__Class** type_info() {
            static app::IBehaviourEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBehaviourEvent__Class**)(modloader::win::memory::resolve_rva(0x0474DBF0));
            }
            return cache;
        }
        inline app::IBehaviourEvent__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourEvent__Class>(type_info(), "UberBehaviourTree", "IBehaviourEvent");
        }
        inline app::IBehaviourEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::IBehaviourEvent__Array>(get_class(), size);
        }
        inline app::IBehaviourEvent__Array* create_array(const std::vector<app::IBehaviourEvent*>& items) {
            return il2cpp::array_new<app::IBehaviourEvent__Array>(get_class(), items);
        }
    } // namespace IBehaviourEvent
} // namespace app::classes::types
