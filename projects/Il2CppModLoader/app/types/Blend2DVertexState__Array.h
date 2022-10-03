#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Blend2DVertexState__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Blend2DVertexState__Array__Class** type_info;
        inline app::Blend2DVertexState__Array__Class* get_class() {
            return il2cpp::get_class<app::Blend2DVertexState__Array__Class>(type_info, "Moon", "Blend2DVertexState[]");
        }
        inline app::Blend2DVertexState__Array* create() {
            return il2cpp::create_object<app::Blend2DVertexState__Array>(get_class());
        }
    } // namespace Blend2DVertexState__Array
} // namespace app::classes::types
