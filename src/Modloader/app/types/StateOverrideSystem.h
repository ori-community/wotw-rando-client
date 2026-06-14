#pragma once
#include <Modloader/app/structs/StateOverrideSystem.h>
#include <Modloader/app/structs/StateOverrideSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateOverrideSystem {
        inline app::StateOverrideSystem__Class** type_info() {
            static app::StateOverrideSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StateOverrideSystem__Class**)(modloader::win::memory::resolve_rva(0x0475A428));
            }
            return cache;
        }
        inline app::StateOverrideSystem__Class* get_class() {
            return il2cpp::get_class<app::StateOverrideSystem__Class>(type_info(), "", "StateOverrideSystem");
        }
        inline app::StateOverrideSystem* create() {
            return il2cpp::create_object<app::StateOverrideSystem>(get_class());
        }
    } // namespace StateOverrideSystem
} // namespace app::classes::types
