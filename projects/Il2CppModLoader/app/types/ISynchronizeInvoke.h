#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISynchronizeInvoke {
        inline app::ISynchronizeInvoke__Class** type_info = (app::ISynchronizeInvoke__Class**)(modloader::win::memory::resolve_rva(0x0477FF38));
        inline app::ISynchronizeInvoke__Class* get_class() {
            return il2cpp::get_class<app::ISynchronizeInvoke__Class>(type_info, "System.ComponentModel", "ISynchronizeInvoke");
        }
    } // namespace ISynchronizeInvoke
} // namespace app::classes::types
