#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshTrail {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeshTrail__Class** type_info;
        inline app::MeshTrail__Class* get_class() {
            return il2cpp::get_class<app::MeshTrail__Class>(type_info, "", "MeshTrail");
        }
        inline app::MeshTrail* create() {
            return il2cpp::create_object<app::MeshTrail>(get_class());
        }
        inline app::MeshTrail__Array* create_array(int size) {
            return il2cpp::array_new<app::MeshTrail__Array>(get_class(), size);
        }
    } // namespace MeshTrail
} // namespace app::classes::types
