#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Delegate__Array {
        inline app::Delegate__Array__Class** type_info = (app::Delegate__Array__Class**)(modloader::win::memory::resolve_rva(0x0472D340));
        inline app::Delegate__Array__Class* get_class() {
            return il2cpp::get_class<app::Delegate__Array__Class>(type_info, "System", "Delegate[]");
        }
        inline app::Delegate__Array* create() {
            return il2cpp::create_object<app::Delegate__Array>(get_class());
        }
    } // namespace Delegate__Array
} // namespace app::classes::types
