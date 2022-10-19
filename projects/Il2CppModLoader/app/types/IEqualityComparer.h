#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEqualityComparer {
        inline app::IEqualityComparer__Class** type_info = (app::IEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x047941F0));
        inline app::IEqualityComparer__Class* get_class() {
            return il2cpp::get_class<app::IEqualityComparer__Class>(type_info, "System.Collections", "IEqualityComparer");
        }
    } // namespace IEqualityComparer
} // namespace app::classes::types
