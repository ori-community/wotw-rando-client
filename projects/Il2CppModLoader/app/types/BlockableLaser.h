#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlockableLaser {
        inline app::BlockableLaser__Class** type_info = (app::BlockableLaser__Class**)(modloader::win::memory::resolve_rva(0x047009E8));
        inline app::BlockableLaser__Class* get_class() {
            return il2cpp::get_class<app::BlockableLaser__Class>(type_info, "", "BlockableLaser");
        }
        inline app::BlockableLaser* create() {
            return il2cpp::create_object<app::BlockableLaser>(get_class());
        }
        inline app::BlockableLaser__Array* create_array(int size) {
            return il2cpp::array_new<app::BlockableLaser__Array>(get_class(), size);
        }
        inline app::BlockableLaser__Array* create_array(const std::vector<app::BlockableLaser*>& items) {
            return il2cpp::array_new<app::BlockableLaser__Array>(get_class(), items);
        }
    } // namespace BlockableLaser
} // namespace app::classes::types
