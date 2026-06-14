#pragma once
#include <Modloader/app/structs/LocomotionContext.h>
#include <Modloader/app/structs/LocomotionContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionContext {
        inline app::LocomotionContext__Class** type_info() {
            static app::LocomotionContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocomotionContext__Class**)(modloader::win::memory::resolve_rva(0x0472CFF8));
            }
            return cache;
        }
        inline app::LocomotionContext__Class* get_class() {
            return il2cpp::get_class<app::LocomotionContext__Class>(type_info(), "Moon", "LocomotionContext");
        }
        inline app::LocomotionContext* create() {
            return il2cpp::create_object<app::LocomotionContext>(get_class());
        }
    } // namespace LocomotionContext
} // namespace app::classes::types
