#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IState_1 {
        inline app::IState_1__Class** type_info = (app::IState_1__Class**)(modloader::win::memory::resolve_rva(0x04720778));
        inline app::IState_1__Class* get_class() {
            return il2cpp::get_class<app::IState_1__Class>(type_info, "Moon.InteractionGraph", "IState");
        }
        inline app::IState_1__Array* create_array(int size) {
            return il2cpp::array_new<app::IState_1__Array>(get_class(), size);
        }
        inline app::IState_1__Array* create_array(const std::vector<app::IState_1*>& items) {
            return il2cpp::array_new<app::IState_1__Array>(get_class(), items);
        }
    } // namespace IState_1
} // namespace app::classes::types
