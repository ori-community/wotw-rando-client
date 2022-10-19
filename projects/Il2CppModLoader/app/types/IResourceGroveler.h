#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IResourceGroveler {
        inline app::IResourceGroveler__Class** type_info = (app::IResourceGroveler__Class**)(modloader::win::memory::resolve_rva(0x0470FD10));
        inline app::IResourceGroveler__Class* get_class() {
            return il2cpp::get_class<app::IResourceGroveler__Class>(type_info, "System.Resources", "IResourceGroveler");
        }
    } // namespace IResourceGroveler
} // namespace app::classes::types
