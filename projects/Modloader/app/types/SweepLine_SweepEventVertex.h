#pragma once
#include <Modloader/app/structs/SweepLine_SweepEventVertex.h>
#include <Modloader/app/structs/SweepLine_SweepEventVertex__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SweepLine_SweepEventVertex {
        inline app::SweepLine_SweepEventVertex__Class** type_info() {
            static app::SweepLine_SweepEventVertex__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SweepLine_SweepEventVertex__Class**)(modloader::win::memory::resolve_rva(0x04795B00));
            }
            return cache;
        }
        inline app::SweepLine_SweepEventVertex__Class* get_class() {
            return il2cpp::get_nested_class<app::SweepLine_SweepEventVertex__Class>(type_info(), "TriangleNet.Meshing.Algorithm", "SweepLine", "SweepEventVertex");
        }
        inline app::SweepLine_SweepEventVertex* create() {
            return il2cpp::create_object<app::SweepLine_SweepEventVertex>(get_class());
        }
    } // namespace SweepLine_SweepEventVertex
} // namespace app::classes::types
