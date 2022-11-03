#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Mutex {
        inline app::Mutex__Class** type_info = (app::Mutex__Class**)(modloader::win::memory::resolve_rva(0x0473C108));
        inline app::Mutex__Class* get_class() {
            return il2cpp::get_class<app::Mutex__Class>(type_info, "System.Threading", "Mutex");
        }
        inline app::Mutex* create() {
            return il2cpp::create_object<app::Mutex>(get_class());
        }
    } // namespace Mutex
} // namespace app::classes::types
