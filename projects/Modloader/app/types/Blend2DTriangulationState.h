#pragma once
#include <Modloader/app/structs/Blend2DTriangulationState.h>
#include <Modloader/app/structs/Blend2DTriangulationState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Blend2DTriangulationState {
        inline app::Blend2DTriangulationState__Class** type_info() {
            static app::Blend2DTriangulationState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Blend2DTriangulationState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Blend2DTriangulationState__Class* get_class() {
            return il2cpp::get_class<app::Blend2DTriangulationState__Class>(type_info(), "Moon", "Blend2DTriangulationState");
        }
        inline app::Blend2DTriangulationState* create() {
            return il2cpp::create_object<app::Blend2DTriangulationState>(get_class());
        }
    } // namespace Blend2DTriangulationState
} // namespace app::classes::types
