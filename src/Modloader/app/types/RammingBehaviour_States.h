#pragma once
#include <Modloader/app/structs/RammingBehaviour_States.h>
#include <Modloader/app/structs/RammingBehaviour_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_States {
        inline app::RammingBehaviour_States__Class** type_info() {
            static app::RammingBehaviour_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RammingBehaviour_States__Class**)(modloader::win::memory::resolve_rva(0x0475C850));
            }
            return cache;
        }
        inline app::RammingBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_States__Class>(type_info(), "Moon", "RammingBehaviour", "States");
        }
        inline app::RammingBehaviour_States* create() {
            return il2cpp::create_object<app::RammingBehaviour_States>(get_class());
        }
    } // namespace RammingBehaviour_States
} // namespace app::classes::types
