#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Blend2DVertexState__Array {
        inline app::Blend2DVertexState__Array__Class** type_info = (app::Blend2DVertexState__Array__Class**)(modloader::win::memory::resolve_rva(0x0475C4E8));
        inline app::Blend2DVertexState__Array__Class* get_class() {
            return il2cpp::get_class<app::Blend2DVertexState__Array__Class>(type_info, "Moon", "Blend2DVertexState[]");
        }
        inline app::Blend2DVertexState__Array* create() {
            return il2cpp::create_object<app::Blend2DVertexState__Array>(get_class());
        }
    } // namespace Blend2DVertexState__Array
} // namespace app::classes::types
