#pragma once
#include <Modloader/app/structs/Blend2DSegmentState.h>
#include <Modloader/app/structs/Blend2DSegmentState__Array.h>
#include <Modloader/app/structs/Blend2DSegmentState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Blend2DSegmentState {
        inline app::Blend2DSegmentState__Class** type_info() {
            static app::Blend2DSegmentState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Blend2DSegmentState__Class**)(modloader::win::memory::resolve_rva(0x0471ACD0));
            }
            return cache;
        }
        inline app::Blend2DSegmentState__Class* get_class() {
            return il2cpp::get_class<app::Blend2DSegmentState__Class>(type_info(), "Moon", "Blend2DSegmentState");
        }
        inline app::Blend2DSegmentState* create() {
            return il2cpp::create_object<app::Blend2DSegmentState>(get_class());
        }
        inline app::Blend2DSegmentState__Array* create_array(int size) {
            return il2cpp::array_new<app::Blend2DSegmentState__Array>(get_class(), size);
        }
        inline app::Blend2DSegmentState__Array* create_array(const std::vector<app::Blend2DSegmentState*>& items) {
            return il2cpp::array_new<app::Blend2DSegmentState__Array>(get_class(), items);
        }
    } // namespace Blend2DSegmentState
} // namespace app::classes::types
