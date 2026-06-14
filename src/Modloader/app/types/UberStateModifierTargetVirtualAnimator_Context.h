#pragma once
#include <Modloader/app/structs/UberStateModifierTargetVirtualAnimator_Context.h>
#include <Modloader/app/structs/UberStateModifierTargetVirtualAnimator_Context__Boxed.h>
#include <Modloader/app/structs/UberStateModifierTargetVirtualAnimator_Context__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateModifierTargetVirtualAnimator_Context {
        inline app::UberStateModifierTargetVirtualAnimator_Context__Class** type_info() {
            static app::UberStateModifierTargetVirtualAnimator_Context__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateModifierTargetVirtualAnimator_Context__Class**)(modloader::win::memory::resolve_rva(0x047789A8));
            }
            return cache;
        }
        inline app::UberStateModifierTargetVirtualAnimator_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateModifierTargetVirtualAnimator_Context__Class>(type_info(), "", "UberStateModifierTargetVirtualAnimator", "Context");
        }
        inline app::UberStateModifierTargetVirtualAnimator_Context* create() {
            return il2cpp::create_object<app::UberStateModifierTargetVirtualAnimator_Context>(get_class());
        }
        inline app::UberStateModifierTargetVirtualAnimator_Context__Boxed* box(app::UberStateModifierTargetVirtualAnimator_Context value) {
            return il2cpp::box_value<app::UberStateModifierTargetVirtualAnimator_Context__Boxed>(get_class(), value);
        }
    } // namespace UberStateModifierTargetVirtualAnimator_Context
} // namespace app::classes::types
