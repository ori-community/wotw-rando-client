#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IOException {
        inline app::IOException__Class** type_info = (app::IOException__Class**)(modloader::win::memory::resolve_rva(0x04709900));
        inline app::IOException__Class* get_class() {
            return il2cpp::get_class<app::IOException__Class>(type_info, "System.IO", "IOException");
        }
        inline app::IOException* create() {
            return il2cpp::create_object<app::IOException>(get_class());
        }
    } // namespace IOException
} // namespace app::classes::types
