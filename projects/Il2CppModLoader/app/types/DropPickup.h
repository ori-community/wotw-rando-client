#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropPickup {
        inline app::DropPickup__Class** type_info = (app::DropPickup__Class**)(modloader::win::memory::resolve_rva(0x047410F0));
        inline app::DropPickup__Class* get_class() {
            return il2cpp::get_class<app::DropPickup__Class>(type_info, "", "DropPickup");
        }
        inline app::DropPickup* create() {
            return il2cpp::create_object<app::DropPickup>(get_class());
        }
        inline app::DropPickup__Array* create_array(int size) {
            return il2cpp::array_new<app::DropPickup__Array>(get_class(), size);
        }
        inline app::DropPickup__Array* create_array(const std::vector<app::DropPickup*>& items) {
            return il2cpp::array_new<app::DropPickup__Array>(get_class(), items);
        }
    } // namespace DropPickup
} // namespace app::classes::types
