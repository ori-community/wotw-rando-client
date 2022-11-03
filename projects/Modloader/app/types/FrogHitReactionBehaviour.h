#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrogHitReactionBehaviour {
        namespace {
            inline app::FrogHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::FrogHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::FrogHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FrogHitReactionBehaviour__Class>(type_info, "", "FrogHitReactionBehaviour");
        }
        inline app::FrogHitReactionBehaviour* create() {
            return il2cpp::create_object<app::FrogHitReactionBehaviour>(get_class());
        }
    } // namespace FrogHitReactionBehaviour
} // namespace app::classes::types
