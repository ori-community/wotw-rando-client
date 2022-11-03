#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VertexCirculator {
        namespace {
            inline app::VertexCirculator__Class* type_info_ref = nullptr;
        }
        inline app::VertexCirculator__Class** type_info = &type_info_ref;
        inline app::VertexCirculator__Class* get_class() {
            return il2cpp::get_class<app::VertexCirculator__Class>(type_info, "TriangleNet.Meshing.Iterators", "VertexCirculator");
        }
        inline app::VertexCirculator* create() {
            return il2cpp::create_object<app::VertexCirculator>(get_class());
        }
    } // namespace VertexCirculator
} // namespace app::classes::types
