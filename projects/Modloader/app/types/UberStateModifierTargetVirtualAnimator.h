#pragma once
#include <Modloader/app/structs/UberStateModifierTargetVirtualAnimator.h>
#include <Modloader/app/structs/UberStateModifierTargetVirtualAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateModifierTargetVirtualAnimator {
        inline app::UberStateModifierTargetVirtualAnimator__Class** type_info() {
            static app::UberStateModifierTargetVirtualAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateModifierTargetVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x04727CE8));
            }
            return cache;
        }
        inline app::UberStateModifierTargetVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberStateModifierTargetVirtualAnimator__Class>(type_info(), "", "UberStateModifierTargetVirtualAnimator");
        }
        inline app::UberStateModifierTargetVirtualAnimator* create() {
            return il2cpp::create_object<app::UberStateModifierTargetVirtualAnimator>(get_class());
        }
    } // namespace UberStateModifierTargetVirtualAnimator
} // namespace app::classes::types
