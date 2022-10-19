#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IButtonInput {
        inline app::IButtonInput__Class** type_info = (app::IButtonInput__Class**)(modloader::win::memory::resolve_rva(0x04780F50));
        inline app::IButtonInput__Class* get_class() {
            return il2cpp::get_class<app::IButtonInput__Class>(type_info, "SmartInput", "IButtonInput");
        }
        inline app::IButtonInput__Array* create_array(int size) {
            return il2cpp::array_new<app::IButtonInput__Array>(get_class(), size);
        }
        inline app::IButtonInput__Array* create_array(const std::vector<app::IButtonInput*>& items) {
            return il2cpp::array_new<app::IButtonInput__Array>(get_class(), items);
        }
    } // namespace IButtonInput
} // namespace app::classes::types
