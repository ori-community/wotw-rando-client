#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LockQueue__Class.h>
#include <Modloader/app/structs/LockQueue.h>

namespace app::classes::types {
    namespace LockQueue {
        inline app::LockQueue__Class** type_info = (app::LockQueue__Class**)(modloader::win::memory::resolve_rva(0x0472BC30));
        inline app::LockQueue__Class* get_class() {
            return il2cpp::get_class<app::LockQueue__Class>(type_info, "System.Threading", "LockQueue");
        }
        inline app::LockQueue* create() {
            return il2cpp::create_object<app::LockQueue>(get_class());
        }
    } // namespace LockQueue
} // namespace app::classes::types
