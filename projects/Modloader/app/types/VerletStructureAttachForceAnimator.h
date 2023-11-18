#pragma once
#include <Modloader/app/structs/VerletStructureAttachForceAnimator.h>
#include <Modloader/app/structs/VerletStructureAttachForceAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructureAttachForceAnimator {
        inline app::VerletStructureAttachForceAnimator__Class** type_info() {
            static app::VerletStructureAttachForceAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletStructureAttachForceAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletStructureAttachForceAnimator__Class* get_class() {
            return il2cpp::get_class<app::VerletStructureAttachForceAnimator__Class>(type_info(), "Moon.Timeline", "VerletStructureAttachForceAnimator");
        }
        inline app::VerletStructureAttachForceAnimator* create() {
            return il2cpp::create_object<app::VerletStructureAttachForceAnimator>(get_class());
        }
    } // namespace VerletStructureAttachForceAnimator
} // namespace app::classes::types
