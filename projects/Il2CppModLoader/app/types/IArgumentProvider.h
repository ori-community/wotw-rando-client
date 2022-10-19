#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IArgumentProvider {
        inline app::IArgumentProvider__Class** type_info = (app::IArgumentProvider__Class**)(modloader::win::memory::resolve_rva(0x0470B5D8));
        inline app::IArgumentProvider__Class* get_class() {
            return il2cpp::get_class<app::IArgumentProvider__Class>(type_info, "System.Linq.Expressions", "IArgumentProvider");
        }
    } // namespace IArgumentProvider
} // namespace app::classes::types
