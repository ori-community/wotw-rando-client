#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IServiceProvider {
        inline app::IServiceProvider__Class** type_info = (app::IServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04709510));
        inline app::IServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::IServiceProvider__Class>(type_info, "System", "IServiceProvider");
        }
    } // namespace IServiceProvider
} // namespace app::classes::types
