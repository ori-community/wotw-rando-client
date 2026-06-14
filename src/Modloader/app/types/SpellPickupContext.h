#pragma once
#include <Modloader/app/structs/SpellPickupContext.h>
#include <Modloader/app/structs/SpellPickupContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellPickupContext {
        inline app::SpellPickupContext__Class** type_info() {
            static app::SpellPickupContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpellPickupContext__Class**)(modloader::win::memory::resolve_rva(0x0477FDC0));
            }
            return cache;
        }
        inline app::SpellPickupContext__Class* get_class() {
            return il2cpp::get_class<app::SpellPickupContext__Class>(type_info(), "", "SpellPickupContext");
        }
        inline app::SpellPickupContext* create() {
            return il2cpp::create_object<app::SpellPickupContext>(get_class());
        }
    } // namespace SpellPickupContext
} // namespace app::classes::types
