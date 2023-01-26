#pragma once
#include <Modloader/app/structs/IState_1.h>
#include <Modloader/app/structs/IState_1__Array.h>
#include <Modloader/app/structs/IState_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IState_1 {
        inline app::IState_1__Class** type_info() {
            static app::IState_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IState_1__Class**)(modloader::win::memory::resolve_rva(0x04720778));
            }
            return cache;
        }
        inline app::IState_1__Class* get_class() {
            return il2cpp::get_class<app::IState_1__Class>(type_info(), "Moon.InteractionGraph", "IState");
        }
        inline app::IState_1__Array* create_array(int size) {
            return il2cpp::array_new<app::IState_1__Array>(get_class(), size);
        }
        inline app::IState_1__Array* create_array(const std::vector<app::IState_1*>& items) {
            return il2cpp::array_new<app::IState_1__Array>(get_class(), items);
        }
    } // namespace IState_1
} // namespace app::classes::types
