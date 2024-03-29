#pragma once
#include <Modloader/app/structs/UnitySynchronizationContext.h>
#include <Modloader/app/structs/UnitySynchronizationContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnitySynchronizationContext {
        inline app::UnitySynchronizationContext__Class** type_info() {
            static app::UnitySynchronizationContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnitySynchronizationContext__Class**)(modloader::win::memory::resolve_rva(0x0472BC38));
            }
            return cache;
        }
        inline app::UnitySynchronizationContext__Class* get_class() {
            return il2cpp::get_class<app::UnitySynchronizationContext__Class>(type_info(), "UnityEngine", "UnitySynchronizationContext");
        }
        inline app::UnitySynchronizationContext* create() {
            return il2cpp::create_object<app::UnitySynchronizationContext>(get_class());
        }
    } // namespace UnitySynchronizationContext
} // namespace app::classes::types
