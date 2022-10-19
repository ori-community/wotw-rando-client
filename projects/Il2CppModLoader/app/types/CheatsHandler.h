#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CheatsHandler {
        inline app::CheatsHandler__Class** type_info = (app::CheatsHandler__Class**)(modloader::win::memory::resolve_rva(0x0471ABA0));
        inline app::CheatsHandler__Class* get_class() {
            return il2cpp::get_class<app::CheatsHandler__Class>(type_info, "", "CheatsHandler");
        }
        inline app::CheatsHandler* create() {
            return il2cpp::create_object<app::CheatsHandler>(get_class());
        }
    } // namespace CheatsHandler
} // namespace app::classes::types
