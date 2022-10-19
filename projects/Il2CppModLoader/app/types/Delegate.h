#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Delegate {
        inline app::Delegate__Class** type_info = (app::Delegate__Class**)(modloader::win::memory::resolve_rva(0x0478C3D0));
        inline app::Delegate__Class* get_class() {
            return il2cpp::get_class<app::Delegate__Class>(type_info, "System", "Delegate");
        }
        inline app::Delegate* create() {
            return il2cpp::create_object<app::Delegate>(get_class());
        }
        inline app::Delegate__Array* create_array(int size) {
            return il2cpp::array_new<app::Delegate__Array>(get_class(), size);
        }
        inline app::Delegate__Array* create_array(const std::vector<app::Delegate*>& items) {
            return il2cpp::array_new<app::Delegate__Array>(get_class(), items);
        }
    } // namespace Delegate
} // namespace app::classes::types
