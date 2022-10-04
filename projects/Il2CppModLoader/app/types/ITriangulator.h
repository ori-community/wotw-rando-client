#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITriangulator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITriangulator__Class** type_info;
        inline app::ITriangulator__Class* get_class() {
            return il2cpp::get_class<app::ITriangulator__Class>(type_info, "TriangleNet.Meshing", "ITriangulator");
        }
        inline app::ITriangulator* create() {
            return il2cpp::create_object<app::ITriangulator>(get_class());
        }
    } // namespace ITriangulator
} // namespace app::classes::types
