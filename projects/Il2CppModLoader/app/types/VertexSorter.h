#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VertexSorter {
        inline app::VertexSorter__Class** type_info = (app::VertexSorter__Class**)(modloader::win::memory::resolve_rva(0x0471AA48));
        inline app::VertexSorter__Class* get_class() {
            return il2cpp::get_class<app::VertexSorter__Class>(type_info, "TriangleNet.Tools", "VertexSorter");
        }
        inline app::VertexSorter* create() {
            return il2cpp::create_object<app::VertexSorter>(get_class());
        }
    } // namespace VertexSorter
} // namespace app::classes::types
