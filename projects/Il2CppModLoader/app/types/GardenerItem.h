#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GardenerItem {
        inline app::GardenerItem__Class** type_info = (app::GardenerItem__Class**)(modloader::win::memory::resolve_rva(0x04716960));
        inline app::GardenerItem__Class* get_class() {
            return il2cpp::get_class<app::GardenerItem__Class>(type_info, "", "GardenerItem");
        }
        inline app::GardenerItem* create() {
            return il2cpp::create_object<app::GardenerItem>(get_class());
        }
        inline app::GardenerItem__Array* create_array(int size) {
            return il2cpp::array_new<app::GardenerItem__Array>(get_class(), size);
        }
        inline app::GardenerItem__Array* create_array(const std::vector<app::GardenerItem*>& items) {
            return il2cpp::array_new<app::GardenerItem__Array>(get_class(), items);
        }
    } // namespace GardenerItem
} // namespace app::classes::types
