#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SynchronizationLockException {
        inline app::SynchronizationLockException__Class** type_info = (app::SynchronizationLockException__Class**)(modloader::win::memory::resolve_rva(0x0474E690));
        inline app::SynchronizationLockException__Class* get_class() {
            return il2cpp::get_class<app::SynchronizationLockException__Class>(type_info, "System.Threading", "SynchronizationLockException");
        }
        inline app::SynchronizationLockException* create() {
            return il2cpp::create_object<app::SynchronizationLockException>(get_class());
        }
    } // namespace SynchronizationLockException
} // namespace app::classes::types
