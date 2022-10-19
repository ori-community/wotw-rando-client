#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExpandString {
        inline app::ExpandString__Class** type_info = (app::ExpandString__Class**)(modloader::win::memory::resolve_rva(0x04769CB8));
        inline app::ExpandString__Class* get_class() {
            return il2cpp::get_class<app::ExpandString__Class>(type_info, "Microsoft.Win32", "ExpandString");
        }
        inline app::ExpandString* create() {
            return il2cpp::create_object<app::ExpandString>(get_class());
        }
    } // namespace ExpandString
} // namespace app::classes::types
