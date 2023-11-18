#pragma once
#include <Modloader/app/structs/SweepLine.h>
#include <Modloader/app/structs/SweepLine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SweepLine {
        inline app::SweepLine__Class** type_info() {
            static app::SweepLine__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SweepLine__Class**)(modloader::win::memory::resolve_rva(0x0472EA20));
            }
            return cache;
        }
        inline app::SweepLine__Class* get_class() {
            return il2cpp::get_class<app::SweepLine__Class>(type_info(), "TriangleNet.Meshing.Algorithm", "SweepLine");
        }
        inline app::SweepLine* create() {
            return il2cpp::create_object<app::SweepLine>(get_class());
        }
    } // namespace SweepLine
} // namespace app::classes::types
