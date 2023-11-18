#pragma once
#include <Modloader/app/structs/SpiderlingHitReactionBehaviour_c.h>
#include <Modloader/app/structs/SpiderlingHitReactionBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderlingHitReactionBehaviour_c {
        inline app::SpiderlingHitReactionBehaviour_c__Class** type_info() {
            static app::SpiderlingHitReactionBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderlingHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x047085D8));
            }
            return cache;
        }
        inline app::SpiderlingHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderlingHitReactionBehaviour_c__Class>(type_info(), "", "SpiderlingHitReactionBehaviour", "<>c");
        }
        inline app::SpiderlingHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::SpiderlingHitReactionBehaviour_c>(get_class());
        }
    } // namespace SpiderlingHitReactionBehaviour_c
} // namespace app::classes::types
