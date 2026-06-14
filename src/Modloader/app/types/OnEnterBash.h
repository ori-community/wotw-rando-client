#pragma once
#include <Modloader/app/structs/OnEnterBash.h>
#include <Modloader/app/structs/OnEnterBash__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnEnterBash {
        inline app::OnEnterBash__Class** type_info() {
            static app::OnEnterBash__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OnEnterBash__Class**)(modloader::win::memory::resolve_rva(0x04794F38));
            }
            return cache;
        }
        inline app::OnEnterBash__Class* get_class() {
            return il2cpp::get_class<app::OnEnterBash__Class>(type_info(), "fsm.triggers", "OnEnterBash");
        }
        inline app::OnEnterBash* create() {
            return il2cpp::create_object<app::OnEnterBash>(get_class());
        }
    } // namespace OnEnterBash
} // namespace app::classes::types
