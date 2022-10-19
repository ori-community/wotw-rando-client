#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AdjacencyMatrix {
        inline app::AdjacencyMatrix__Class** type_info = (app::AdjacencyMatrix__Class**)(modloader::win::memory::resolve_rva(0x04759A58));
        inline app::AdjacencyMatrix__Class* get_class() {
            return il2cpp::get_class<app::AdjacencyMatrix__Class>(type_info, "TriangleNet.Tools", "AdjacencyMatrix");
        }
        inline app::AdjacencyMatrix* create() {
            return il2cpp::create_object<app::AdjacencyMatrix>(get_class());
        }
    } // namespace AdjacencyMatrix
} // namespace app::classes::types
