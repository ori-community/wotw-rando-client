#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Blend2DTriangulationState__Class.h>
#include <Modloader/app/structs/Blend2DTriangulationState.h>

namespace app::classes::types {
    namespace Blend2DTriangulationState {
        namespace {
            inline app::Blend2DTriangulationState__Class* type_info_ref = nullptr;
        }
        inline app::Blend2DTriangulationState__Class** type_info = &type_info_ref;
        inline app::Blend2DTriangulationState__Class* get_class() {
            return il2cpp::get_class<app::Blend2DTriangulationState__Class>(type_info, "Moon", "Blend2DTriangulationState");
        }
        inline app::Blend2DTriangulationState* create() {
            return il2cpp::create_object<app::Blend2DTriangulationState>(get_class());
        }
    } // namespace Blend2DTriangulationState
} // namespace app::classes::types
