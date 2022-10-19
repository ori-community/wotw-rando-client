#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileInfo__Array {
        inline app::FileInfo__Array__Class** type_info = (app::FileInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04737E18));
        inline app::FileInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FileInfo__Array__Class>(type_info, "System.IO", "FileInfo[]");
        }
        inline app::FileInfo__Array* create() {
            return il2cpp::create_object<app::FileInfo__Array>(get_class());
        }
    } // namespace FileInfo__Array
} // namespace app::classes::types
