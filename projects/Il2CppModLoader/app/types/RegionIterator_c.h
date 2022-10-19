#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegionIterator_c {
        inline app::RegionIterator_c__Class** type_info = (app::RegionIterator_c__Class**)(modloader::win::memory::resolve_rva(0x047598C0));
        inline app::RegionIterator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RegionIterator_c__Class>(type_info, "TriangleNet.Meshing.Iterators", "RegionIterator", "<>c");
        }
        inline app::RegionIterator_c* create() {
            return il2cpp::create_object<app::RegionIterator_c>(get_class());
        }
    } // namespace RegionIterator_c
} // namespace app::classes::types
