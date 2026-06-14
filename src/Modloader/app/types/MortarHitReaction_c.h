#pragma once
#include <Modloader/app/structs/MortarHitReaction_c.h>
#include <Modloader/app/structs/MortarHitReaction_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarHitReaction_c {
        inline app::MortarHitReaction_c__Class** type_info() {
            static app::MortarHitReaction_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MortarHitReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04754CD8));
            }
            return cache;
        }
        inline app::MortarHitReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarHitReaction_c__Class>(type_info(), "", "MortarHitReaction", "<>c");
        }
        inline app::MortarHitReaction_c* create() {
            return il2cpp::create_object<app::MortarHitReaction_c>(get_class());
        }
    } // namespace MortarHitReaction_c
} // namespace app::classes::types
