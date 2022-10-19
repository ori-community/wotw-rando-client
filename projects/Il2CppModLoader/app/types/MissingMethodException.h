#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MissingMethodException {
        inline app::MissingMethodException__Class** type_info = (app::MissingMethodException__Class**)(modloader::win::memory::resolve_rva(0x0475E250));
        inline app::MissingMethodException__Class* get_class() {
            return il2cpp::get_class<app::MissingMethodException__Class>(type_info, "System", "MissingMethodException");
        }
        inline app::MissingMethodException* create() {
            return il2cpp::create_object<app::MissingMethodException>(get_class());
        }
    } // namespace MissingMethodException
} // namespace app::classes::types
