#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleVoronoi {
        namespace {
            inline app::SimpleVoronoi__Class* type_info_ref = nullptr;
        }
        inline app::SimpleVoronoi__Class** type_info = &type_info_ref;
        inline app::SimpleVoronoi__Class* get_class() {
            return il2cpp::get_class<app::SimpleVoronoi__Class>(type_info, "TriangleNet.Voronoi.Legacy", "SimpleVoronoi");
        }
        inline app::SimpleVoronoi* create() {
            return il2cpp::create_object<app::SimpleVoronoi>(get_class());
        }
    } // namespace SimpleVoronoi
} // namespace app::classes::types
