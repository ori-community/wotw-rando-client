#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegionIterator_c_DisplayClass3_0 {
        inline app::RegionIterator_c_DisplayClass3_0__Class** type_info = (app::RegionIterator_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x04705320));
        inline app::RegionIterator_c_DisplayClass3_0__Class* get_class() {
            return il2cpp::get_nested_class<app::RegionIterator_c_DisplayClass3_0__Class>(type_info, "TriangleNet.Meshing.Iterators", "RegionIterator", "<>c__DisplayClass3_0");
        }
        inline app::RegionIterator_c_DisplayClass3_0* create() {
            return il2cpp::create_object<app::RegionIterator_c_DisplayClass3_0>(get_class());
        }
    } // namespace RegionIterator_c_DisplayClass3_0
} // namespace app::classes::types
