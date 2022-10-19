#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace INearSeinReceiver {
        inline app::INearSeinReceiver__Class** type_info = (app::INearSeinReceiver__Class**)(modloader::win::memory::resolve_rva(0x04755320));
        inline app::INearSeinReceiver__Class* get_class() {
            return il2cpp::get_class<app::INearSeinReceiver__Class>(type_info, "", "INearSeinReceiver");
        }
    } // namespace INearSeinReceiver
} // namespace app::classes::types
