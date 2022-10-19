#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MissingFieldException {
        inline app::MissingFieldException__Class** type_info = (app::MissingFieldException__Class**)(modloader::win::memory::resolve_rva(0x0476BEB8));
        inline app::MissingFieldException__Class* get_class() {
            return il2cpp::get_class<app::MissingFieldException__Class>(type_info, "System", "MissingFieldException");
        }
        inline app::MissingFieldException* create() {
            return il2cpp::create_object<app::MissingFieldException>(get_class());
        }
    } // namespace MissingFieldException
} // namespace app::classes::types
