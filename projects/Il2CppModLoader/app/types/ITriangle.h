#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITriangle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITriangle__Class** type_info;
        inline app::ITriangle__Class* get_class() {
            return il2cpp::get_class<app::ITriangle__Class>(type_info, "TriangleNet.Geometry", "ITriangle");
        }
        inline app::ITriangle__Array* create_array(int size) {
            return il2cpp::array_new<app::ITriangle__Array>(get_class(), size);
        }
    } // namespace ITriangle
} // namespace app::classes::types
