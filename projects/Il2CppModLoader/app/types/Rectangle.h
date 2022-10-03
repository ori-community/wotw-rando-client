#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Rectangle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Rectangle__Class** type_info;
        inline app::Rectangle__Class* get_class() {
            return il2cpp::get_class<app::Rectangle__Class>(type_info, "TriangleNet.Geometry", "Rectangle");
        }
        inline app::Rectangle* create() {
            return il2cpp::create_object<app::Rectangle>(get_class());
        }
    } // namespace Rectangle
} // namespace app::classes::types
