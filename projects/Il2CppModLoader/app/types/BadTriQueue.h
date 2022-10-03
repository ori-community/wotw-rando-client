#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BadTriQueue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BadTriQueue__Class** type_info;
        inline app::BadTriQueue__Class* get_class() {
            return il2cpp::get_class<app::BadTriQueue__Class>(type_info, "TriangleNet.Meshing.Data", "BadTriQueue");
        }
        inline app::BadTriQueue* create() {
            return il2cpp::create_object<app::BadTriQueue>(get_class());
        }
    } // namespace BadTriQueue
} // namespace app::classes::types
