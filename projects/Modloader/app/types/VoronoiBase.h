#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VoronoiBase {
        namespace {
            inline app::VoronoiBase__Class* type_info_ref = nullptr;
        }
        inline app::VoronoiBase__Class** type_info = &type_info_ref;
        inline app::VoronoiBase__Class* get_class() {
            return il2cpp::get_class<app::VoronoiBase__Class>(type_info, "TriangleNet.Voronoi", "VoronoiBase");
        }
        inline app::VoronoiBase* create() {
            return il2cpp::create_object<app::VoronoiBase>(get_class());
        }
    } // namespace VoronoiBase
} // namespace app::classes::types
