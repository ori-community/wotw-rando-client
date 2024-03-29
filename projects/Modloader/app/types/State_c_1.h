#pragma once
#include <Modloader/app/structs/State_c_1.h>
#include <Modloader/app/structs/State_c_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace State_c_1 {
        inline app::State_c_1__Class** type_info() {
            static app::State_c_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::State_c_1__Class**)(modloader::win::memory::resolve_rva(0x0477A4D0));
            }
            return cache;
        }
        inline app::State_c_1__Class* get_class() {
            return il2cpp::get_nested_class<app::State_c_1__Class>(type_info(), "fsm", "State", "<>c");
        }
        inline app::State_c_1* create() {
            return il2cpp::create_object<app::State_c_1>(get_class());
        }
    } // namespace State_c_1
} // namespace app::classes::types
