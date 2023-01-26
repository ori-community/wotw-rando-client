#pragma once
#include <Modloader/app/structs/SynchronizationContext.h>
#include <Modloader/app/structs/SynchronizationContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SynchronizationContext {
        inline app::SynchronizationContext__Class** type_info() {
            static app::SynchronizationContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SynchronizationContext__Class**)(modloader::win::memory::resolve_rva(0x04799078));
            }
            return cache;
        }
        inline app::SynchronizationContext__Class* get_class() {
            return il2cpp::get_class<app::SynchronizationContext__Class>(type_info(), "System.Threading", "SynchronizationContext");
        }
        inline app::SynchronizationContext* create() {
            return il2cpp::create_object<app::SynchronizationContext>(get_class());
        }
    } // namespace SynchronizationContext
} // namespace app::classes::types
