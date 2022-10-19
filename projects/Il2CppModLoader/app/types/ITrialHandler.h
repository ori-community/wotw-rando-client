#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITrialHandler {
        inline app::ITrialHandler__Class** type_info = (app::ITrialHandler__Class**)(modloader::win::memory::resolve_rva(0x047907D8));
        inline app::ITrialHandler__Class* get_class() {
            return il2cpp::get_class<app::ITrialHandler__Class>(type_info, "Moon.Race", "ITrialHandler");
        }
    } // namespace ITrialHandler
} // namespace app::classes::types
