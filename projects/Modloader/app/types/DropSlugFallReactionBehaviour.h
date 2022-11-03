#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropSlugFallReactionBehaviour {
        namespace {
            inline app::DropSlugFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::DropSlugFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::DropSlugFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DropSlugFallReactionBehaviour__Class>(type_info, "", "DropSlugFallReactionBehaviour");
        }
        inline app::DropSlugFallReactionBehaviour* create() {
            return il2cpp::create_object<app::DropSlugFallReactionBehaviour>(get_class());
        }
    } // namespace DropSlugFallReactionBehaviour
} // namespace app::classes::types
