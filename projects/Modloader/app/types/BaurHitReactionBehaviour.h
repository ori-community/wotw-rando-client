#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaurHitReactionBehaviour {
        namespace {
            inline app::BaurHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::BaurHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::BaurHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::BaurHitReactionBehaviour__Class>(type_info, "", "BaurHitReactionBehaviour");
        }
        inline app::BaurHitReactionBehaviour* create() {
            return il2cpp::create_object<app::BaurHitReactionBehaviour>(get_class());
        }
    } // namespace BaurHitReactionBehaviour
} // namespace app::classes::types
