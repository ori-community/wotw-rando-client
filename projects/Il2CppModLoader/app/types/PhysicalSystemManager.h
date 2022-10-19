#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicalSystemManager {
        inline app::PhysicalSystemManager__Class** type_info = (app::PhysicalSystemManager__Class**)(modloader::win::memory::resolve_rva(0x047568B8));
        inline app::PhysicalSystemManager__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemManager__Class>(type_info, "", "PhysicalSystemManager");
        }
        inline app::PhysicalSystemManager* create() {
            return il2cpp::create_object<app::PhysicalSystemManager>(get_class());
        }
        inline app::PhysicalSystemManager__Array* create_array(int size) {
            return il2cpp::array_new<app::PhysicalSystemManager__Array>(get_class(), size);
        }
        inline app::PhysicalSystemManager__Array* create_array(const std::vector<app::PhysicalSystemManager*>& items) {
            return il2cpp::array_new<app::PhysicalSystemManager__Array>(get_class(), items);
        }
    } // namespace PhysicalSystemManager
} // namespace app::classes::types
