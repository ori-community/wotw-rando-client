#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrianglePool_Sample_d_9 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TrianglePool_Sample_d_9__Class** type_info;
        inline app::TrianglePool_Sample_d_9__Class* get_class() {
            return il2cpp::get_nested_class<app::TrianglePool_Sample_d_9__Class>(type_info, "TriangleNet", "TrianglePool", "<Sample>d__9");
        }
        inline app::TrianglePool_Sample_d_9* create() {
            return il2cpp::create_object<app::TrianglePool_Sample_d_9>(get_class());
        }
    } // namespace TrianglePool_Sample_d_9
} // namespace app::classes::types
