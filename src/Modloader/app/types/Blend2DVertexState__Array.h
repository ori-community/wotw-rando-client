#pragma once
#include <Modloader/app/structs/Blend2DVertexState__Array.h>
#include <Modloader/app/structs/Blend2DVertexState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Blend2DVertexState__Array {
        inline app::Blend2DVertexState__Array__Class** type_info() {
            static app::Blend2DVertexState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Blend2DVertexState__Array__Class**)(modloader::win::memory::resolve_rva(0x0475C4E8));
            }
            return cache;
        }
        inline app::Blend2DVertexState__Array__Class* get_class() {
            return il2cpp::get_class<app::Blend2DVertexState__Array__Class>(type_info(), "Moon", "Blend2DVertexState[]");
        }
        inline app::Blend2DVertexState__Array* create() {
            return il2cpp::create_object<app::Blend2DVertexState__Array>(get_class());
        }
    } // namespace Blend2DVertexState__Array
} // namespace app::classes::types
