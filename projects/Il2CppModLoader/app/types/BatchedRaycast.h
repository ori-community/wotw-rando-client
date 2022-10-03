#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BatchedRaycast {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BatchedRaycast__Class** type_info;
        inline app::BatchedRaycast__Class* get_class() {
            return il2cpp::get_class<app::BatchedRaycast__Class>(type_info, "", "BatchedRaycast");
        }
        inline app::BatchedRaycast* create() {
            return il2cpp::create_object<app::BatchedRaycast>(get_class());
        }
    } // namespace BatchedRaycast
} // namespace app::classes::types
