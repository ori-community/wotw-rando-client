#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BadTriangle__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BadTriangle__Array__Class** type_info;
        inline app::BadTriangle__Array__Class* get_class() {
            return il2cpp::get_class<app::BadTriangle__Array__Class>(type_info, "TriangleNet.Meshing.Data", "BadTriangle[]");
        }
        inline app::BadTriangle__Array* create() {
            return il2cpp::create_object<app::BadTriangle__Array>(get_class());
        }
    } // namespace BadTriangle__Array
} // namespace app::classes::types
