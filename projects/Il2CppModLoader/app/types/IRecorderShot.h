#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRecorderShot {
        inline app::IRecorderShot__Class** type_info = (app::IRecorderShot__Class**)(modloader::win::memory::resolve_rva(0x04763DB8));
        inline app::IRecorderShot__Class* get_class() {
            return il2cpp::get_class<app::IRecorderShot__Class>(type_info, "Moon.ContinuousIntegration", "IRecorderShot");
        }
    } // namespace IRecorderShot
} // namespace app::classes::types
