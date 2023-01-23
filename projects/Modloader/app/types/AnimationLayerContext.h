#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationLayerContext__Class.h>
#include <Modloader/app/structs/AnimationLayerContext.h>
#include <Modloader/app/structs/AnimationLayerContext__Boxed.h>

namespace app::classes::types {
    namespace AnimationLayerContext {
        inline app::AnimationLayerContext__Class** type_info = (app::AnimationLayerContext__Class**)(modloader::win::memory::resolve_rva(0x0470AE48));
        inline app::AnimationLayerContext__Class* get_class() {
            return il2cpp::get_class<app::AnimationLayerContext__Class>(type_info, "Moon", "AnimationLayerContext");
        }
        inline app::AnimationLayerContext* create() {
            return il2cpp::create_object<app::AnimationLayerContext>(get_class());
        }
        inline app::AnimationLayerContext__Boxed* box(app::AnimationLayerContext value) {
            return il2cpp::box_value<app::AnimationLayerContext__Boxed>(get_class(), value);
        }
    } // namespace AnimationLayerContext
} // namespace app::classes::types
