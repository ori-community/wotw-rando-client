#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RectangularVertexClipper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RectangularVertexClipper__Class** type_info;
        inline app::RectangularVertexClipper__Class* get_class() {
            return il2cpp::get_class<app::RectangularVertexClipper__Class>(type_info, "UnityEngine.UI", "RectangularVertexClipper");
        }
        inline app::RectangularVertexClipper* create() {
            return il2cpp::create_object<app::RectangularVertexClipper>(get_class());
        }
    } // namespace RectangularVertexClipper
} // namespace app::classes::types
