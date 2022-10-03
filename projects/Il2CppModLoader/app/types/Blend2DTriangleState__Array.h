#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Blend2DTriangleState__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Blend2DTriangleState__Array__Class** type_info;
        inline app::Blend2DTriangleState__Array__Class* get_class() {
            return il2cpp::get_class<app::Blend2DTriangleState__Array__Class>(type_info, "Moon", "Blend2DTriangleState[]");
        }
        inline app::Blend2DTriangleState__Array* create() {
            return il2cpp::create_object<app::Blend2DTriangleState__Array>(get_class());
        }
    } // namespace Blend2DTriangleState__Array
} // namespace app::classes::types
