#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DirectoryNotFoundException {
        inline app::DirectoryNotFoundException__Class** type_info = (app::DirectoryNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x04773F98));
        inline app::DirectoryNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::DirectoryNotFoundException__Class>(type_info, "System.IO", "DirectoryNotFoundException");
        }
        inline app::DirectoryNotFoundException* create() {
            return il2cpp::create_object<app::DirectoryNotFoundException>(get_class());
        }
    } // namespace DirectoryNotFoundException
} // namespace app::classes::types
