#pragma once
#include <Modloader/app/structs/SynchronizationLockException.h>
#include <Modloader/app/structs/SynchronizationLockException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SynchronizationLockException {
        inline app::SynchronizationLockException__Class** type_info() {
            static app::SynchronizationLockException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SynchronizationLockException__Class**)(modloader::win::memory::resolve_rva(0x0474E690));
            }
            return cache;
        }
        inline app::SynchronizationLockException__Class* get_class() {
            return il2cpp::get_class<app::SynchronizationLockException__Class>(type_info(), "System.Threading", "SynchronizationLockException");
        }
        inline app::SynchronizationLockException* create() {
            return il2cpp::create_object<app::SynchronizationLockException>(get_class());
        }
    } // namespace SynchronizationLockException
} // namespace app::classes::types
