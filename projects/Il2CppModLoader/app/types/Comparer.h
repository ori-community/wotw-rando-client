#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Comparer {
        inline app::Comparer__Class** type_info = (app::Comparer__Class**)(modloader::win::memory::resolve_rva(0x04744C38));
        inline app::Comparer__Class* get_class() {
            return il2cpp::get_class<app::Comparer__Class>(type_info, "System.Collections", "Comparer");
        }
        inline app::Comparer* create() {
            return il2cpp::create_object<app::Comparer>(get_class());
        }
    } // namespace Comparer
} // namespace app::classes::types
