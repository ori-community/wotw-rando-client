#pragma once
#include <Modloader/app/structs/SemaphoreFullException.h>
#include <Modloader/app/structs/SemaphoreFullException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SemaphoreFullException {
        inline app::SemaphoreFullException__Class** type_info() {
            static app::SemaphoreFullException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SemaphoreFullException__Class**)(modloader::win::memory::resolve_rva(0x04794A88));
            }
            return cache;
        }
        inline app::SemaphoreFullException__Class* get_class() {
            return il2cpp::get_class<app::SemaphoreFullException__Class>(type_info(), "System.Threading", "SemaphoreFullException");
        }
        inline app::SemaphoreFullException* create() {
            return il2cpp::create_object<app::SemaphoreFullException>(get_class());
        }
    } // namespace SemaphoreFullException
} // namespace app::classes::types
