#pragma once
#include <Modloader/app/structs/SwarmAgent_States.h>
#include <Modloader/app/structs/SwarmAgent_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmAgent_States {
        inline app::SwarmAgent_States__Class** type_info() {
            static app::SwarmAgent_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SwarmAgent_States__Class**)(modloader::win::memory::resolve_rva(0x04760688));
            }
            return cache;
        }
        inline app::SwarmAgent_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SwarmAgent_States__Class>(type_info(), "", "SwarmAgent", "States");
        }
        inline app::SwarmAgent_States* create() {
            return il2cpp::create_object<app::SwarmAgent_States>(get_class());
        }
    } // namespace SwarmAgent_States
} // namespace app::classes::types
