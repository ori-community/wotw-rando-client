#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SweepLine_SweepEventVertex {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SweepLine_SweepEventVertex__Class** type_info;
        inline app::SweepLine_SweepEventVertex__Class* get_class() {
            return il2cpp::get_nested_class<app::SweepLine_SweepEventVertex__Class>(type_info, "TriangleNet.Meshing.Algorithm", "SweepLine", "SweepEventVertex");
        }
        inline app::SweepLine_SweepEventVertex* create() {
            return il2cpp::create_object<app::SweepLine_SweepEventVertex>(get_class());
        }
    } // namespace SweepLine_SweepEventVertex
} // namespace app::classes::types
