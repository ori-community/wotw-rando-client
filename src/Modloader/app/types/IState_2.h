#pragma once
#include <Modloader/app/structs/IState_2.h>
#include <Modloader/app/structs/IState_2__Array.h>
#include <Modloader/app/structs/IState_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IState_2 {
        inline app::IState_2__Class** type_info() {
            static app::IState_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IState_2__Class**)(modloader::win::memory::resolve_rva(0x04761E58));
            }
            return cache;
        }
        inline app::IState_2__Class* get_class() {
            return il2cpp::get_class<app::IState_2__Class>(type_info(), "fsm", "IState");
        }
        inline app::IState_2__Array* create_array(int size) {
            return il2cpp::array_new<app::IState_2__Array>(get_class(), size);
        }
        inline app::IState_2__Array* create_array(const std::vector<app::IState_2*>& items) {
            return il2cpp::array_new<app::IState_2__Array>(get_class(), items);
        }
    } // namespace IState_2
} // namespace app::classes::types
