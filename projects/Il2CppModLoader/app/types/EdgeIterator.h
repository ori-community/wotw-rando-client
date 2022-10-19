#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EdgeIterator {
        inline app::EdgeIterator__Class** type_info = (app::EdgeIterator__Class**)(modloader::win::memory::resolve_rva(0x04727498));
        inline app::EdgeIterator__Class* get_class() {
            return il2cpp::get_class<app::EdgeIterator__Class>(type_info, "TriangleNet.Meshing.Iterators", "EdgeIterator");
        }
        inline app::EdgeIterator* create() {
            return il2cpp::create_object<app::EdgeIterator>(get_class());
        }
    } // namespace EdgeIterator
} // namespace app::classes::types
