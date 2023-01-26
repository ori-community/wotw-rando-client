#pragma once
#include <Modloader/app/structs/PickupContext.h>
#include <Modloader/app/structs/PickupContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PickupContext {
        inline app::PickupContext__Class** type_info() {
            static app::PickupContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PickupContext__Class**)(modloader::win::memory::resolve_rva(0x0471C6B8));
            }
            return cache;
        }
        inline app::PickupContext__Class* get_class() {
            return il2cpp::get_class<app::PickupContext__Class>(type_info(), "", "PickupContext");
        }
        inline app::PickupContext* create() {
            return il2cpp::create_object<app::PickupContext>(get_class());
        }
    } // namespace PickupContext
} // namespace app::classes::types
