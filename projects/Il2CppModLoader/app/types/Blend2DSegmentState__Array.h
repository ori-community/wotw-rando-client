#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Blend2DSegmentState__Array {
        inline app::Blend2DSegmentState__Array__Class** type_info = (app::Blend2DSegmentState__Array__Class**)(modloader::win::memory::resolve_rva(0x0471BA28));
        inline app::Blend2DSegmentState__Array__Class* get_class() {
            return il2cpp::get_class<app::Blend2DSegmentState__Array__Class>(type_info, "Moon", "Blend2DSegmentState[]");
        }
        inline app::Blend2DSegmentState__Array* create() {
            return il2cpp::create_object<app::Blend2DSegmentState__Array>(get_class());
        }
    } // namespace Blend2DSegmentState__Array
} // namespace app::classes::types
