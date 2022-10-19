#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IProfilingDataProvider {
        inline app::IProfilingDataProvider__Class** type_info = (app::IProfilingDataProvider__Class**)(modloader::win::memory::resolve_rva(0x0473B468));
        inline app::IProfilingDataProvider__Class* get_class() {
            return il2cpp::get_class<app::IProfilingDataProvider__Class>(type_info, "Moon", "IProfilingDataProvider");
        }
    } // namespace IProfilingDataProvider
} // namespace app::classes::types
