#pragma once
#include <Modloader/app/structs/OnReceiveDamage.h>
#include <Modloader/app/structs/OnReceiveDamage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnReceiveDamage {
        inline app::OnReceiveDamage__Class** type_info() {
            static app::OnReceiveDamage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OnReceiveDamage__Class**)(modloader::win::memory::resolve_rva(0x0475C878));
            }
            return cache;
        }
        inline app::OnReceiveDamage__Class* get_class() {
            return il2cpp::get_class<app::OnReceiveDamage__Class>(type_info(), "fsm.triggers", "OnReceiveDamage");
        }
        inline app::OnReceiveDamage* create() {
            return il2cpp::create_object<app::OnReceiveDamage>(get_class());
        }
    } // namespace OnReceiveDamage
} // namespace app::classes::types
