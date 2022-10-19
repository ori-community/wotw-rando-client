#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITweenLerpInputProvider {
        inline app::ITweenLerpInputProvider__Class** type_info = (app::ITweenLerpInputProvider__Class**)(modloader::win::memory::resolve_rva(0x0476C1B0));
        inline app::ITweenLerpInputProvider__Class* get_class() {
            return il2cpp::get_class<app::ITweenLerpInputProvider__Class>(type_info, "Moon", "ITweenLerpInputProvider");
        }
    } // namespace ITweenLerpInputProvider
} // namespace app::classes::types
