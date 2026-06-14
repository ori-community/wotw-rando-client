#pragma once
#include <Modloader/app/structs/VertexSorter.h>
#include <Modloader/app/structs/VertexSorter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VertexSorter {
        inline app::VertexSorter__Class** type_info() {
            static app::VertexSorter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VertexSorter__Class**)(modloader::win::memory::resolve_rva(0x0471AA48));
            }
            return cache;
        }
        inline app::VertexSorter__Class* get_class() {
            return il2cpp::get_class<app::VertexSorter__Class>(type_info(), "TriangleNet.Tools", "VertexSorter");
        }
        inline app::VertexSorter* create() {
            return il2cpp::create_object<app::VertexSorter>(get_class());
        }
    } // namespace VertexSorter
} // namespace app::classes::types
