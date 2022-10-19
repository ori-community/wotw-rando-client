#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BoundedVoronoiLegacy {
        namespace {
            inline app::BoundedVoronoiLegacy__Class* type_info_ref = nullptr;
        }
        inline app::BoundedVoronoiLegacy__Class** type_info = &type_info_ref;
        inline app::BoundedVoronoiLegacy__Class* get_class() {
            return il2cpp::get_class<app::BoundedVoronoiLegacy__Class>(type_info, "TriangleNet.Voronoi.Legacy", "BoundedVoronoiLegacy");
        }
        inline app::BoundedVoronoiLegacy* create() {
            return il2cpp::create_object<app::BoundedVoronoiLegacy>(get_class());
        }
    } // namespace BoundedVoronoiLegacy
} // namespace app::classes::types
