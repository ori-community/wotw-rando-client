#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletStructureAttachForceAnimator__Class.h>
#include <Modloader/app/structs/VerletStructureAttachForceAnimator.h>

namespace app::classes::types {
    namespace VerletStructureAttachForceAnimator {
        namespace {
            inline app::VerletStructureAttachForceAnimator__Class* type_info_ref = nullptr;
        }
        inline app::VerletStructureAttachForceAnimator__Class** type_info = &type_info_ref;
        inline app::VerletStructureAttachForceAnimator__Class* get_class() {
            return il2cpp::get_class<app::VerletStructureAttachForceAnimator__Class>(type_info, "Moon.Timeline", "VerletStructureAttachForceAnimator");
        }
        inline app::VerletStructureAttachForceAnimator* create() {
            return il2cpp::create_object<app::VerletStructureAttachForceAnimator>(get_class());
        }
    } // namespace VerletStructureAttachForceAnimator
} // namespace app::classes::types
