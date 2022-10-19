#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CheatsHandler_c {
        inline app::CheatsHandler_c__Class** type_info = (app::CheatsHandler_c__Class**)(modloader::win::memory::resolve_rva(0x04737638));
        inline app::CheatsHandler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CheatsHandler_c__Class>(type_info, "", "CheatsHandler", "<>c");
        }
        inline app::CheatsHandler_c* create() {
            return il2cpp::create_object<app::CheatsHandler_c>(get_class());
        }
    } // namespace CheatsHandler_c
} // namespace app::classes::types
