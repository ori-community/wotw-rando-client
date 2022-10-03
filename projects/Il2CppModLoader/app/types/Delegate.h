#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Delegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Delegate__Class** type_info;
        inline app::Delegate__Class* get_class() {
            return il2cpp::get_class<app::Delegate__Class>(type_info, "System", "Delegate");
        }
        inline app::Delegate* create() {
            return il2cpp::create_object<app::Delegate>(get_class());
        }
        inline app::Delegate__Array* create_array(int size) {
            return il2cpp::array_new<app::Delegate__Array>(get_class(), size);
        }
    } // namespace Delegate
} // namespace app::classes::types
