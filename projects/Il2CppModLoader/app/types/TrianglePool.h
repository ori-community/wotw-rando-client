#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrianglePool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TrianglePool__Class** type_info;
        inline app::TrianglePool__Class* get_class() {
            return il2cpp::get_class<app::TrianglePool__Class>(type_info, "TriangleNet", "TrianglePool");
        }
        inline app::TrianglePool* create() {
            return il2cpp::create_object<app::TrianglePool>(get_class());
        }
    } // namespace TrianglePool
} // namespace app::classes::types
