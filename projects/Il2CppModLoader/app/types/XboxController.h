#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxController {
        inline app::XboxController__Class** type_info = (app::XboxController__Class**)(modloader::win::memory::resolve_rva(0x04799C08));
        inline app::XboxController__Class* get_class() {
            return il2cpp::get_class<app::XboxController__Class>(type_info, "J2i.Net.XInputWrapper", "XboxController");
        }
        inline app::XboxController* create() {
            return il2cpp::create_object<app::XboxController>(get_class());
        }
        inline app::XboxController__Array* create_array(int size) {
            return il2cpp::array_new<app::XboxController__Array>(get_class(), size);
        }
        inline app::XboxController__Array* create_array(const std::vector<app::XboxController*>& items) {
            return il2cpp::array_new<app::XboxController__Array>(get_class(), items);
        }
    } // namespace XboxController
} // namespace app::classes::types
