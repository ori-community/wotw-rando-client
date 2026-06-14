#pragma once
#include <Modloader/app/structs/GasballHitReactionBehaviour_c.h>
#include <Modloader/app/structs/GasballHitReactionBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballHitReactionBehaviour_c {
        inline app::GasballHitReactionBehaviour_c__Class** type_info() {
            static app::GasballHitReactionBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GasballHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04729880));
            }
            return cache;
        }
        inline app::GasballHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GasballHitReactionBehaviour_c__Class>(type_info(), "", "GasballHitReactionBehaviour", "<>c");
        }
        inline app::GasballHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::GasballHitReactionBehaviour_c>(get_class());
        }
    } // namespace GasballHitReactionBehaviour_c
} // namespace app::classes::types
