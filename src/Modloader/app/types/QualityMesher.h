#pragma once
#include <Modloader/app/structs/QualityMesher.h>
#include <Modloader/app/structs/QualityMesher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QualityMesher {
        inline app::QualityMesher__Class** type_info() {
            static app::QualityMesher__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QualityMesher__Class**)(modloader::win::memory::resolve_rva(0x0478EF50));
            }
            return cache;
        }
        inline app::QualityMesher__Class* get_class() {
            return il2cpp::get_class<app::QualityMesher__Class>(type_info(), "TriangleNet.Meshing", "QualityMesher");
        }
        inline app::QualityMesher* create() {
            return il2cpp::create_object<app::QualityMesher>(get_class());
        }
    } // namespace QualityMesher
} // namespace app::classes::types
