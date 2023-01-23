#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Timeout__Class.h>
#include <Modloader/app/structs/Timeout.h>

namespace app::classes::types {
    namespace Timeout {
        inline app::Timeout__Class** type_info = (app::Timeout__Class**)(modloader::win::memory::resolve_rva(0x0473AF80));
        inline app::Timeout__Class* get_class() {
            return il2cpp::get_class<app::Timeout__Class>(type_info, "System.Threading", "Timeout");
        }
        inline app::Timeout* create() {
            return il2cpp::create_object<app::Timeout>(get_class());
        }
    } // namespace Timeout
} // namespace app::classes::types
