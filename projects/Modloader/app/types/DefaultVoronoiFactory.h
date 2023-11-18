#pragma once
#include <Modloader/app/structs/DefaultVoronoiFactory.h>
#include <Modloader/app/structs/DefaultVoronoiFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultVoronoiFactory {
        inline app::DefaultVoronoiFactory__Class** type_info() {
            static app::DefaultVoronoiFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultVoronoiFactory__Class**)(modloader::win::memory::resolve_rva(0x0475A8A8));
            }
            return cache;
        }
        inline app::DefaultVoronoiFactory__Class* get_class() {
            return il2cpp::get_class<app::DefaultVoronoiFactory__Class>(type_info(), "TriangleNet.Voronoi", "DefaultVoronoiFactory");
        }
        inline app::DefaultVoronoiFactory* create() {
            return il2cpp::create_object<app::DefaultVoronoiFactory>(get_class());
        }
    } // namespace DefaultVoronoiFactory
} // namespace app::classes::types
