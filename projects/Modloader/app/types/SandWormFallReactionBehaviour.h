#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormFallReactionBehaviour {
        namespace {
            inline app::SandWormFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SandWormFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormFallReactionBehaviour__Class>(type_info, "", "SandWormFallReactionBehaviour");
        }
        inline app::SandWormFallReactionBehaviour* create() {
            return il2cpp::create_object<app::SandWormFallReactionBehaviour>(get_class());
        }
    } // namespace SandWormFallReactionBehaviour
} // namespace app::classes::types
