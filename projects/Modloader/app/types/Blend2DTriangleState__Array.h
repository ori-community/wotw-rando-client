#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Blend2DTriangleState__Array {
        inline app::Blend2DTriangleState__Array__Class** type_info = (app::Blend2DTriangleState__Array__Class**)(modloader::win::memory::resolve_rva(0x047607A0));
        inline app::Blend2DTriangleState__Array__Class* get_class() {
            return il2cpp::get_class<app::Blend2DTriangleState__Array__Class>(type_info, "Moon", "Blend2DTriangleState[]");
        }
        inline app::Blend2DTriangleState__Array* create() {
            return il2cpp::create_object<app::Blend2DTriangleState__Array>(get_class());
        }
    } // namespace Blend2DTriangleState__Array
} // namespace app::classes::types
