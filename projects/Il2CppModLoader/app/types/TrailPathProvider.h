#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TrailPathProvider {
        inline app::TrailPathProvider__Class** type_info = (app::TrailPathProvider__Class**)(modloader::win::memory::resolve_rva(0x04798F10));
        inline app::TrailPathProvider__Class* get_class() {
            return il2cpp::get_class<app::TrailPathProvider__Class>(type_info, "", "TrailPathProvider");
        }
    } // namespace TrailPathProvider
} // namespace app::classes::types
