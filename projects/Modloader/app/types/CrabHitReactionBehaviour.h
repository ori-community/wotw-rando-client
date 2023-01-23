#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrabHitReactionBehaviour__Class.h>
#include <Modloader/app/structs/CrabHitReactionBehaviour.h>

namespace app::classes::types {
    namespace CrabHitReactionBehaviour {
        namespace {
            inline app::CrabHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::CrabHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::CrabHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabHitReactionBehaviour__Class>(type_info, "", "CrabHitReactionBehaviour");
        }
        inline app::CrabHitReactionBehaviour* create() {
            return il2cpp::create_object<app::CrabHitReactionBehaviour>(get_class());
        }
    } // namespace CrabHitReactionBehaviour
} // namespace app::classes::types
