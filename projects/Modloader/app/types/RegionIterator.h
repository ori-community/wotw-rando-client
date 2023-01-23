#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RegionIterator__Class.h>
#include <Modloader/app/structs/RegionIterator.h>

namespace app::classes::types {
    namespace RegionIterator {
        inline app::RegionIterator__Class** type_info = (app::RegionIterator__Class**)(modloader::win::memory::resolve_rva(0x047044C0));
        inline app::RegionIterator__Class* get_class() {
            return il2cpp::get_class<app::RegionIterator__Class>(type_info, "TriangleNet.Meshing.Iterators", "RegionIterator");
        }
        inline app::RegionIterator* create() {
            return il2cpp::create_object<app::RegionIterator>(get_class());
        }
    } // namespace RegionIterator
} // namespace app::classes::types
