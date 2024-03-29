#pragma once
#include <Modloader/app/structs/State_2.h>
#include <Modloader/app/structs/State_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace State_2 {
        inline app::State_2__Class** type_info() {
            static app::State_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::State_2__Class**)(modloader::win::memory::resolve_rva(0x04745D48));
            }
            return cache;
        }
        inline app::State_2__Class* get_class() {
            return il2cpp::get_class<app::State_2__Class>(type_info(), "fsm", "State");
        }
        inline app::State_2* create() {
            return il2cpp::create_object<app::State_2>(get_class());
        }
    } // namespace State_2
} // namespace app::classes::types
