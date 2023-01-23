#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Blend2DTriangleState__Class.h>
#include <Modloader/app/structs/Blend2DTriangleState.h>
#include <Modloader/app/structs/Blend2DTriangleState__Array.h>

namespace app::classes::types {
    namespace Blend2DTriangleState {
        inline app::Blend2DTriangleState__Class** type_info = (app::Blend2DTriangleState__Class**)(modloader::win::memory::resolve_rva(0x047794C8));
        inline app::Blend2DTriangleState__Class* get_class() {
            return il2cpp::get_class<app::Blend2DTriangleState__Class>(type_info, "Moon", "Blend2DTriangleState");
        }
        inline app::Blend2DTriangleState* create() {
            return il2cpp::create_object<app::Blend2DTriangleState>(get_class());
        }
        inline app::Blend2DTriangleState__Array* create_array(int size) {
            return il2cpp::array_new<app::Blend2DTriangleState__Array>(get_class(), size);
        }
        inline app::Blend2DTriangleState__Array* create_array(const std::vector<app::Blend2DTriangleState*>& items) {
            return il2cpp::array_new<app::Blend2DTriangleState__Array>(get_class(), items);
        }
    } // namespace Blend2DTriangleState
} // namespace app::classes::types
