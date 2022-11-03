#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeaponmasterItem {
        inline app::WeaponmasterItem__Class** type_info = (app::WeaponmasterItem__Class**)(modloader::win::memory::resolve_rva(0x04779410));
        inline app::WeaponmasterItem__Class* get_class() {
            return il2cpp::get_class<app::WeaponmasterItem__Class>(type_info, "", "WeaponmasterItem");
        }
        inline app::WeaponmasterItem* create() {
            return il2cpp::create_object<app::WeaponmasterItem>(get_class());
        }
        inline app::WeaponmasterItem__Array* create_array(int size) {
            return il2cpp::array_new<app::WeaponmasterItem__Array>(get_class(), size);
        }
        inline app::WeaponmasterItem__Array* create_array(const std::vector<app::WeaponmasterItem*>& items) {
            return il2cpp::array_new<app::WeaponmasterItem__Array>(get_class(), items);
        }
    } // namespace WeaponmasterItem
} // namespace app::classes::types
