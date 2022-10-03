#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BatchedSpherecast {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BatchedSpherecast__Class** type_info;
        inline app::BatchedSpherecast__Class* get_class() {
            return il2cpp::get_class<app::BatchedSpherecast__Class>(type_info, "", "BatchedSpherecast");
        }
        inline app::BatchedSpherecast* create() {
            return il2cpp::create_object<app::BatchedSpherecast>(get_class());
        }
    } // namespace BatchedSpherecast
} // namespace app::classes::types
