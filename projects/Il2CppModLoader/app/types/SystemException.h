#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SystemException {
        inline app::SystemException__Class** type_info = (app::SystemException__Class**)(modloader::win::memory::resolve_rva(0x047046D0));
        inline app::SystemException__Class* get_class() {
            return il2cpp::get_class<app::SystemException__Class>(type_info, "System", "SystemException");
        }
        inline app::SystemException* create() {
            return il2cpp::create_object<app::SystemException>(get_class());
        }
    } // namespace SystemException
} // namespace app::classes::types
