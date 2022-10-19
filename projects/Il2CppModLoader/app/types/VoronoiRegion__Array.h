#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VoronoiRegion__Array {
        namespace {
            inline app::VoronoiRegion__Array__Class* type_info_ref = nullptr;
        }
        inline app::VoronoiRegion__Array__Class** type_info = &type_info_ref;
        inline app::VoronoiRegion__Array__Class* get_class() {
            return il2cpp::get_class<app::VoronoiRegion__Array__Class>(type_info, "TriangleNet.Voronoi.Legacy", "VoronoiRegion[]");
        }
        inline app::VoronoiRegion__Array* create() {
            return il2cpp::create_object<app::VoronoiRegion__Array>(get_class());
        }
    } // namespace VoronoiRegion__Array
} // namespace app::classes::types
