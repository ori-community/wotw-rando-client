#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegionIterator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegionIterator_c__Class** type_info;
        inline app::RegionIterator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RegionIterator_c__Class>(type_info, "TriangleNet.Meshing.Iterators", "RegionIterator", "<>c");
        }
        inline app::RegionIterator_c* create() {
            return il2cpp::create_object<app::RegionIterator_c>(get_class());
        }
    } // namespace RegionIterator_c
} // namespace app::classes::types
