#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EdgeIterator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EdgeIterator__Class** type_info;
        inline app::EdgeIterator__Class* get_class() {
            return il2cpp::get_class<app::EdgeIterator__Class>(type_info, "TriangleNet.Meshing.Iterators", "EdgeIterator");
        }
        inline app::EdgeIterator* create() {
            return il2cpp::create_object<app::EdgeIterator>(get_class());
        }
    } // namespace EdgeIterator
} // namespace app::classes::types
