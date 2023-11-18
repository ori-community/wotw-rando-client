#pragma once
#include <Modloader/app/structs/SpiderlingFallReactionBehaviour.h>
#include <Modloader/app/structs/SpiderlingFallReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderlingFallReactionBehaviour {
        inline app::SpiderlingFallReactionBehaviour__Class** type_info() {
            static app::SpiderlingFallReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderlingFallReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderlingFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingFallReactionBehaviour__Class>(type_info(), "", "SpiderlingFallReactionBehaviour");
        }
        inline app::SpiderlingFallReactionBehaviour* create() {
            return il2cpp::create_object<app::SpiderlingFallReactionBehaviour>(get_class());
        }
    } // namespace SpiderlingFallReactionBehaviour
} // namespace app::classes::types
