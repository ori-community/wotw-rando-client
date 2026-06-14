#pragma once
#include <Modloader/app/structs/MinerFallReactionBehaviour_c.h>
#include <Modloader/app/structs/MinerFallReactionBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerFallReactionBehaviour_c {
        inline app::MinerFallReactionBehaviour_c__Class** type_info() {
            static app::MinerFallReactionBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MinerFallReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04750968));
            }
            return cache;
        }
        inline app::MinerFallReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MinerFallReactionBehaviour_c__Class>(type_info(), "", "MinerFallReactionBehaviour", "<>c");
        }
        inline app::MinerFallReactionBehaviour_c* create() {
            return il2cpp::create_object<app::MinerFallReactionBehaviour_c>(get_class());
        }
    } // namespace MinerFallReactionBehaviour_c
} // namespace app::classes::types
