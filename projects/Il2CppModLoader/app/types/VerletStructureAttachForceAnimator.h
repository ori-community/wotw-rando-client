#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletStructureAttachForceAnimator {
        namespace {
            app::VerletStructureAttachForceAnimator__Class* type_info_ref = nullptr;
        }
        app::VerletStructureAttachForceAnimator__Class** type_info = &type_info_ref;
        inline app::VerletStructureAttachForceAnimator__Class* get_class() {
            return il2cpp::get_class<app::VerletStructureAttachForceAnimator__Class>(type_info, "Moon.Timeline", "VerletStructureAttachForceAnimator");
        }
        inline app::VerletStructureAttachForceAnimator* create() {
            return il2cpp::create_object<app::VerletStructureAttachForceAnimator>(get_class());
        }
    } // namespace VerletStructureAttachForceAnimator
} // namespace app::classes::types
