#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Blend2DTriangleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Blend2DTriangleState__Class** type_info;
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
