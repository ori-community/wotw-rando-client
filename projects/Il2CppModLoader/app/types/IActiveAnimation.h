#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IActiveAnimation {
        inline app::IActiveAnimation__Class** type_info = (app::IActiveAnimation__Class**)(modloader::win::memory::resolve_rva(0x0475ED30));
        inline app::IActiveAnimation__Class* get_class() {
            return il2cpp::get_class<app::IActiveAnimation__Class>(type_info, "Moon", "IActiveAnimation");
        }
    } // namespace IActiveAnimation
} // namespace app::classes::types
