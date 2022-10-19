#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IInputTransition {
        inline app::IInputTransition__Class** type_info = (app::IInputTransition__Class**)(modloader::win::memory::resolve_rva(0x04791A98));
        inline app::IInputTransition__Class* get_class() {
            return il2cpp::get_class<app::IInputTransition__Class>(type_info, "Moon.InteractionGraph", "IInputTransition");
        }
        inline app::IInputTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::IInputTransition__Array>(get_class(), size);
        }
        inline app::IInputTransition__Array* create_array(const std::vector<app::IInputTransition*>& items) {
            return il2cpp::array_new<app::IInputTransition__Array>(get_class(), items);
        }
    } // namespace IInputTransition
} // namespace app::classes::types
