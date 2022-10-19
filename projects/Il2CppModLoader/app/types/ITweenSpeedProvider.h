#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITweenSpeedProvider {
        inline app::ITweenSpeedProvider__Class** type_info = (app::ITweenSpeedProvider__Class**)(modloader::win::memory::resolve_rva(0x047687E8));
        inline app::ITweenSpeedProvider__Class* get_class() {
            return il2cpp::get_class<app::ITweenSpeedProvider__Class>(type_info, "Moon", "ITweenSpeedProvider");
        }
    } // namespace ITweenSpeedProvider
} // namespace app::classes::types
