#pragma once
#include <Modloader/app/structs/Blend2DVertexState.h>
#include <Modloader/app/structs/Blend2DVertexState__Array.h>
#include <Modloader/app/structs/Blend2DVertexState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Blend2DVertexState {
        inline app::Blend2DVertexState__Class** type_info() {
            static app::Blend2DVertexState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Blend2DVertexState__Class**)(modloader::win::memory::resolve_rva(0x04704F60));
            }
            return cache;
        }
        inline app::Blend2DVertexState__Class* get_class() {
            return il2cpp::get_class<app::Blend2DVertexState__Class>(type_info(), "Moon", "Blend2DVertexState");
        }
        inline app::Blend2DVertexState* create() {
            return il2cpp::create_object<app::Blend2DVertexState>(get_class());
        }
        inline app::Blend2DVertexState__Array* create_array(int size) {
            return il2cpp::array_new<app::Blend2DVertexState__Array>(get_class(), size);
        }
        inline app::Blend2DVertexState__Array* create_array(const std::vector<app::Blend2DVertexState*>& items) {
            return il2cpp::array_new<app::Blend2DVertexState__Array>(get_class(), items);
        }
    } // namespace Blend2DVertexState
} // namespace app::classes::types
