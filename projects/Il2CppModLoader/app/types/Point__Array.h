#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Point__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Point__Array__Class** type_info;
        inline app::Point__Array__Class* get_class() {
            return il2cpp::get_class<app::Point__Array__Class>(type_info, "TriangleNet.Geometry", "Point[]");
        }
        inline app::Point__Array* create() {
            return il2cpp::create_object<app::Point__Array>(get_class());
        }
    } // namespace Point__Array
} // namespace app::classes::types
