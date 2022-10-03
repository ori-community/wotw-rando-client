#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationLayerContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationLayerContext__Class** type_info;
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
