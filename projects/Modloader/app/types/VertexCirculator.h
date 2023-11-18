#pragma once
#include <Modloader/app/structs/VertexCirculator.h>
#include <Modloader/app/structs/VertexCirculator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VertexCirculator {
        inline app::VertexCirculator__Class** type_info() {
            static app::VertexCirculator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VertexCirculator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VertexCirculator__Class* get_class() {
            return il2cpp::get_class<app::VertexCirculator__Class>(type_info(), "TriangleNet.Meshing.Iterators", "VertexCirculator");
        }
        inline app::VertexCirculator* create() {
            return il2cpp::create_object<app::VertexCirculator>(get_class());
        }
    } // namespace VertexCirculator
} // namespace app::classes::types
