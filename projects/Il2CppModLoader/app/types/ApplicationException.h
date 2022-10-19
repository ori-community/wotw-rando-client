#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ApplicationException {
        inline app::ApplicationException__Class** type_info = (app::ApplicationException__Class**)(modloader::win::memory::resolve_rva(0x04725460));
        inline app::ApplicationException__Class* get_class() {
            return il2cpp::get_class<app::ApplicationException__Class>(type_info, "System", "ApplicationException");
        }
        inline app::ApplicationException* create() {
            return il2cpp::create_object<app::ApplicationException>(get_class());
        }
    } // namespace ApplicationException
} // namespace app::classes::types
