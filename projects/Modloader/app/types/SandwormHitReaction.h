#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandwormHitReaction {
        namespace {
            inline app::SandwormHitReaction__Class* type_info_ref = nullptr;
        }
        inline app::SandwormHitReaction__Class** type_info = &type_info_ref;
        inline app::SandwormHitReaction__Class* get_class() {
            return il2cpp::get_class<app::SandwormHitReaction__Class>(type_info, "", "SandwormHitReaction");
        }
        inline app::SandwormHitReaction* create() {
            return il2cpp::create_object<app::SandwormHitReaction>(get_class());
        }
    } // namespace SandwormHitReaction
} // namespace app::classes::types
