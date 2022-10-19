#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileBasedResourceGroveler {
        inline app::FileBasedResourceGroveler__Class** type_info = (app::FileBasedResourceGroveler__Class**)(modloader::win::memory::resolve_rva(0x04760478));
        inline app::FileBasedResourceGroveler__Class* get_class() {
            return il2cpp::get_class<app::FileBasedResourceGroveler__Class>(type_info, "System.Resources", "FileBasedResourceGroveler");
        }
        inline app::FileBasedResourceGroveler* create() {
            return il2cpp::create_object<app::FileBasedResourceGroveler>(get_class());
        }
    } // namespace FileBasedResourceGroveler
} // namespace app::classes::types
