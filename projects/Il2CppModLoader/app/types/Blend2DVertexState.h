#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Blend2DVertexState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Blend2DVertexState__Class** type_info;
        inline app::Blend2DVertexState__Class* get_class() {
            return il2cpp::get_class<app::Blend2DVertexState__Class>(type_info, "Moon", "Blend2DVertexState");
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
