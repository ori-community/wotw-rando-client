#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CullingCategory__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CullingCategory__Enum__Class** type_info;
        inline app::CullingCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::CullingCategory__Enum__Class>(type_info, "", "CullingCategory");
        }
        inline app::CullingCategory__Enum* create() {
            return il2cpp::create_object<app::CullingCategory__Enum>(get_class());
        }
    } // namespace CullingCategory__Enum
} // namespace app::classes::types
