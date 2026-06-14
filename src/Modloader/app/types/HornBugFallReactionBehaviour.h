#pragma once
#include <Modloader/app/structs/HornBugFallReactionBehaviour.h>
#include <Modloader/app/structs/HornBugFallReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugFallReactionBehaviour {
        inline app::HornBugFallReactionBehaviour__Class** type_info() {
            static app::HornBugFallReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugFallReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugFallReactionBehaviour__Class>(type_info(), "", "HornBugFallReactionBehaviour");
        }
        inline app::HornBugFallReactionBehaviour* create() {
            return il2cpp::create_object<app::HornBugFallReactionBehaviour>(get_class());
        }
    } // namespace HornBugFallReactionBehaviour
} // namespace app::classes::types
