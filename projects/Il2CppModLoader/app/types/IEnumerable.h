#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEnumerable {
        inline app::IEnumerable__Class** type_info = (app::IEnumerable__Class**)(modloader::win::memory::resolve_rva(0x0475B9A8));
        inline app::IEnumerable__Class* get_class() {
            return il2cpp::get_class<app::IEnumerable__Class>(type_info, "System.Collections", "IEnumerable");
        }
    } // namespace IEnumerable
} // namespace app::classes::types
