#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OpCodes {
        inline app::OpCodes__Class** type_info = (app::OpCodes__Class**)(modloader::win::memory::resolve_rva(0x04715BA8));
        inline app::OpCodes__Class* get_class() {
            return il2cpp::get_class<app::OpCodes__Class>(type_info, "System.Reflection.Emit", "OpCodes");
        }
        inline app::OpCodes* create() {
            return il2cpp::create_object<app::OpCodes>(get_class());
        }
    } // namespace OpCodes
} // namespace app::classes::types
