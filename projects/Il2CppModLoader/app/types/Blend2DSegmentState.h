#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Blend2DSegmentState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Blend2DSegmentState__Class** type_info;
        inline app::Blend2DSegmentState__Class* get_class() {
            return il2cpp::get_class<app::Blend2DSegmentState__Class>(type_info, "Moon", "Blend2DSegmentState");
        }
        inline app::Blend2DSegmentState* create() {
            return il2cpp::create_object<app::Blend2DSegmentState>(get_class());
        }
        inline app::Blend2DSegmentState__Array* create_array(int size) {
            return il2cpp::array_new<app::Blend2DSegmentState__Array>(get_class(), size);
        }
    } // namespace Blend2DSegmentState
} // namespace app::classes::types
