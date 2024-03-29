#pragma once
#include <Modloader/app/structs/Triangles.h>
#include <Modloader/app/structs/Triangles__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Triangles {
        inline app::Triangles__Class** type_info() {
            static app::Triangles__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Triangles__Class**)(modloader::win::memory::resolve_rva(0x04734E80));
            }
            return cache;
        }
        inline app::Triangles__Class* get_class() {
            return il2cpp::get_class<app::Triangles__Class>(type_info(), "UnityStandardAssets.ImageEffects", "Triangles");
        }
        inline app::Triangles* create() {
            return il2cpp::create_object<app::Triangles>(get_class());
        }
    } // namespace Triangles
} // namespace app::classes::types
