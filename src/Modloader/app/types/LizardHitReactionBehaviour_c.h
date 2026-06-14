#pragma once
#include <Modloader/app/structs/LizardHitReactionBehaviour_c.h>
#include <Modloader/app/structs/LizardHitReactionBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardHitReactionBehaviour_c {
        inline app::LizardHitReactionBehaviour_c__Class** type_info() {
            static app::LizardHitReactionBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LizardHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0476F708));
            }
            return cache;
        }
        inline app::LizardHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardHitReactionBehaviour_c__Class>(type_info(), "", "LizardHitReactionBehaviour", "<>c");
        }
        inline app::LizardHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::LizardHitReactionBehaviour_c>(get_class());
        }
    } // namespace LizardHitReactionBehaviour_c
} // namespace app::classes::types
