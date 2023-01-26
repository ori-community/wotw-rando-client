#pragma once
#include <Modloader/app/structs/MinerHitReactionBehaviour.h>
#include <Modloader/app/structs/MinerHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerHitReactionBehaviour {
        inline app::MinerHitReactionBehaviour__Class** type_info() {
            static app::MinerHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerHitReactionBehaviour__Class>(type_info(), "", "MinerHitReactionBehaviour");
        }
        inline app::MinerHitReactionBehaviour* create() {
            return il2cpp::create_object<app::MinerHitReactionBehaviour>(get_class());
        }
    } // namespace MinerHitReactionBehaviour
} // namespace app::classes::types
