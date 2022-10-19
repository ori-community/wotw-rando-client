#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Enum__Array {
        inline app::Enum__Array__Class** type_info = (app::Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04782038));
        inline app::Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::Enum__Array__Class>(type_info, "System", "Enum[]");
        }
        inline app::Enum__Array* create() {
            return il2cpp::create_object<app::Enum__Array>(get_class());
        }
    } // namespace Enum__Array
} // namespace app::classes::types
