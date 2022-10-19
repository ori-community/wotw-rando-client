#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyDoor {
        inline app::LegacyDoor__Class** type_info = (app::LegacyDoor__Class**)(modloader::win::memory::resolve_rva(0x04799AF0));
        inline app::LegacyDoor__Class* get_class() {
            return il2cpp::get_class<app::LegacyDoor__Class>(type_info, "", "LegacyDoor");
        }
        inline app::LegacyDoor* create() {
            return il2cpp::create_object<app::LegacyDoor>(get_class());
        }
        inline app::LegacyDoor__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyDoor__Array>(get_class(), size);
        }
        inline app::LegacyDoor__Array* create_array(const std::vector<app::LegacyDoor*>& items) {
            return il2cpp::array_new<app::LegacyDoor__Array>(get_class(), items);
        }
    } // namespace LegacyDoor
} // namespace app::classes::types
