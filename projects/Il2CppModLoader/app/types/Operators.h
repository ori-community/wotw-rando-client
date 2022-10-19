#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Operators {
        inline app::Operators__Class** type_info = (app::Operators__Class**)(modloader::win::memory::resolve_rva(0x04783638));
        inline app::Operators__Class* get_class() {
            return il2cpp::get_class<app::Operators__Class>(type_info, "System.Data", "Operators");
        }
        inline app::Operators* create() {
            return il2cpp::create_object<app::Operators>(get_class());
        }
    } // namespace Operators
} // namespace app::classes::types
