#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LizardHitReactionBehaviour__Class.h>
#include <Modloader/app/structs/LizardHitReactionBehaviour.h>

namespace app::classes::types {
    namespace LizardHitReactionBehaviour {
        namespace {
            inline app::LizardHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LizardHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::LizardHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardHitReactionBehaviour__Class>(type_info, "", "LizardHitReactionBehaviour");
        }
        inline app::LizardHitReactionBehaviour* create() {
            return il2cpp::create_object<app::LizardHitReactionBehaviour>(get_class());
        }
    } // namespace LizardHitReactionBehaviour
} // namespace app::classes::types
