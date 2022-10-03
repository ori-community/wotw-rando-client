#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateModifierTargetVirtualAnimator_Context {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateModifierTargetVirtualAnimator_Context__Class** type_info;
        inline app::UberStateModifierTargetVirtualAnimator_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateModifierTargetVirtualAnimator_Context__Class>(type_info, "", "UberStateModifierTargetVirtualAnimator", "Context");
        }
        inline app::UberStateModifierTargetVirtualAnimator_Context* create() {
            return il2cpp::create_object<app::UberStateModifierTargetVirtualAnimator_Context>(get_class());
        }
        inline app::UberStateModifierTargetVirtualAnimator_Context__Boxed* box(app::UberStateModifierTargetVirtualAnimator_Context value) {
            return il2cpp::box_value<app::UberStateModifierTargetVirtualAnimator_Context__Boxed>(get_class(), value);
        }
    } // namespace UberStateModifierTargetVirtualAnimator_Context
} // namespace app::classes::types
