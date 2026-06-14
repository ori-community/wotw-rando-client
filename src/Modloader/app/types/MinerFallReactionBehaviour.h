#pragma once
#include <Modloader/app/structs/MinerFallReactionBehaviour.h>
#include <Modloader/app/structs/MinerFallReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerFallReactionBehaviour {
        inline app::MinerFallReactionBehaviour__Class** type_info() {
            static app::MinerFallReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerFallReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerFallReactionBehaviour__Class>(type_info(), "", "MinerFallReactionBehaviour");
        }
        inline app::MinerFallReactionBehaviour* create() {
            return il2cpp::create_object<app::MinerFallReactionBehaviour>(get_class());
        }
    } // namespace MinerFallReactionBehaviour
} // namespace app::classes::types
