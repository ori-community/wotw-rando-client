#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericMesher {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GenericMesher__Class** type_info;
        inline app::GenericMesher__Class* get_class() {
            return il2cpp::get_class<app::GenericMesher__Class>(type_info, "TriangleNet.Meshing", "GenericMesher");
        }
        inline app::GenericMesher* create() {
            return il2cpp::create_object<app::GenericMesher>(get_class());
        }
    } // namespace GenericMesher
} // namespace app::classes::types
