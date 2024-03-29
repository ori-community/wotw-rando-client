#pragma once
#include <Modloader/app/structs/MinerHitReactionBehaviour_c.h>
#include <Modloader/app/structs/MinerHitReactionBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerHitReactionBehaviour_c {
        inline app::MinerHitReactionBehaviour_c__Class** type_info() {
            static app::MinerHitReactionBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MinerHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04772088));
            }
            return cache;
        }
        inline app::MinerHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MinerHitReactionBehaviour_c__Class>(type_info(), "", "MinerHitReactionBehaviour", "<>c");
        }
        inline app::MinerHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::MinerHitReactionBehaviour_c>(get_class());
        }
    } // namespace MinerHitReactionBehaviour_c
} // namespace app::classes::types
