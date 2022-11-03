#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MantisHitReactionBehaviour {
        namespace {
            inline app::MantisHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MantisHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MantisHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisHitReactionBehaviour__Class>(type_info, "", "MantisHitReactionBehaviour");
        }
        inline app::MantisHitReactionBehaviour* create() {
            return il2cpp::create_object<app::MantisHitReactionBehaviour>(get_class());
        }
    } // namespace MantisHitReactionBehaviour
} // namespace app::classes::types
