#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Polygon_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Polygon_c__Class** type_info;
        inline app::Polygon_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Polygon_c__Class>(type_info, "", "Polygon", "<>c");
        }
        inline app::Polygon_c* create() {
            return il2cpp::create_object<app::Polygon_c>(get_class());
        }
    } // namespace Polygon_c
} // namespace app::classes::types
