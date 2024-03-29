#pragma once
#include <Modloader/app/structs/SimpleVoronoi.h>
#include <Modloader/app/structs/SimpleVoronoi__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleVoronoi {
        inline app::SimpleVoronoi__Class** type_info() {
            static app::SimpleVoronoi__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleVoronoi__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleVoronoi__Class* get_class() {
            return il2cpp::get_class<app::SimpleVoronoi__Class>(type_info(), "TriangleNet.Voronoi.Legacy", "SimpleVoronoi");
        }
        inline app::SimpleVoronoi* create() {
            return il2cpp::create_object<app::SimpleVoronoi>(get_class());
        }
    } // namespace SimpleVoronoi
} // namespace app::classes::types
