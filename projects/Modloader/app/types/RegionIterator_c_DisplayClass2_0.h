#pragma once
#include <Modloader/app/structs/RegionIterator_c_DisplayClass2_0.h>
#include <Modloader/app/structs/RegionIterator_c_DisplayClass2_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegionIterator_c_DisplayClass2_0 {
        inline app::RegionIterator_c_DisplayClass2_0__Class** type_info() {
            static app::RegionIterator_c_DisplayClass2_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegionIterator_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04763AB8));
            }
            return cache;
        }
        inline app::RegionIterator_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::RegionIterator_c_DisplayClass2_0__Class>(type_info(), "TriangleNet.Meshing.Iterators", "RegionIterator", "<>c__DisplayClass2_0");
        }
        inline app::RegionIterator_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::RegionIterator_c_DisplayClass2_0>(get_class());
        }
    } // namespace RegionIterator_c_DisplayClass2_0
} // namespace app::classes::types
