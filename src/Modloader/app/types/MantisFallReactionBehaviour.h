#pragma once
#include <Modloader/app/structs/MantisFallReactionBehaviour.h>
#include <Modloader/app/structs/MantisFallReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisFallReactionBehaviour {
        inline app::MantisFallReactionBehaviour__Class** type_info() {
            static app::MantisFallReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MantisFallReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MantisFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisFallReactionBehaviour__Class>(type_info(), "", "MantisFallReactionBehaviour");
        }
        inline app::MantisFallReactionBehaviour* create() {
            return il2cpp::create_object<app::MantisFallReactionBehaviour>(get_class());
        }
    } // namespace MantisFallReactionBehaviour
} // namespace app::classes::types
