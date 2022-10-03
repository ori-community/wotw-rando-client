#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VoronoiBase {
        namespace {
            app::VoronoiBase__Class* type_info_ref = nullptr;
        }
        app::VoronoiBase__Class** type_info = &type_info_ref;
        inline app::VoronoiBase__Class* get_class() {
            return il2cpp::get_class<app::VoronoiBase__Class>(type_info, "TriangleNet.Voronoi", "VoronoiBase");
        }
        inline app::VoronoiBase* create() {
            return il2cpp::create_object<app::VoronoiBase>(get_class());
        }
    } // namespace VoronoiBase
} // namespace app::classes::types
