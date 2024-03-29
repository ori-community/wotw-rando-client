#pragma once
#include <Modloader/app/structs/Transition_1.h>
#include <Modloader/app/structs/Transition_1__Array.h>
#include <Modloader/app/structs/Transition_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Transition_1 {
        inline app::Transition_1__Class** type_info() {
            static app::Transition_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Transition_1__Class**)(modloader::win::memory::resolve_rva(0x0471F2A8));
            }
            return cache;
        }
        inline app::Transition_1__Class* get_class() {
            return il2cpp::get_class<app::Transition_1__Class>(type_info(), "fsm", "Transition");
        }
        inline app::Transition_1* create() {
            return il2cpp::create_object<app::Transition_1>(get_class());
        }
        inline app::Transition_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Transition_1__Array>(get_class(), size);
        }
        inline app::Transition_1__Array* create_array(const std::vector<app::Transition_1*>& items) {
            return il2cpp::array_new<app::Transition_1__Array>(get_class(), items);
        }
    } // namespace Transition_1
} // namespace app::classes::types
