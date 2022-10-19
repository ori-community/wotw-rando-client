#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OrdinalComparer {
        inline app::OrdinalComparer__Class** type_info = (app::OrdinalComparer__Class**)(modloader::win::memory::resolve_rva(0x04732678));
        inline app::OrdinalComparer__Class* get_class() {
            return il2cpp::get_class<app::OrdinalComparer__Class>(type_info, "System", "OrdinalComparer");
        }
        inline app::OrdinalComparer* create() {
            return il2cpp::create_object<app::OrdinalComparer>(get_class());
        }
    } // namespace OrdinalComparer
} // namespace app::classes::types
