#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CullingCategory__Enum {
        inline app::CullingCategory__Enum__Class** type_info = (app::CullingCategory__Enum__Class**)(modloader::win::memory::resolve_rva(0x047596D8));
        inline app::CullingCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::CullingCategory__Enum__Class>(type_info, "", "CullingCategory");
        }
        inline app::CullingCategory__Enum* create() {
            return il2cpp::create_object<app::CullingCategory__Enum>(get_class());
        }
    } // namespace CullingCategory__Enum
} // namespace app::classes::types
