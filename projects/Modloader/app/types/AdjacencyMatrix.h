#pragma once
#include <Modloader/app/structs/AdjacencyMatrix.h>
#include <Modloader/app/structs/AdjacencyMatrix__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdjacencyMatrix {
        inline app::AdjacencyMatrix__Class** type_info() {
            static app::AdjacencyMatrix__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AdjacencyMatrix__Class**)(modloader::win::memory::resolve_rva(0x04759A58));
            }
            return cache;
        }
        inline app::AdjacencyMatrix__Class* get_class() {
            return il2cpp::get_class<app::AdjacencyMatrix__Class>(type_info(), "TriangleNet.Tools", "AdjacencyMatrix");
        }
        inline app::AdjacencyMatrix* create() {
            return il2cpp::create_object<app::AdjacencyMatrix>(get_class());
        }
    } // namespace AdjacencyMatrix
} // namespace app::classes::types
