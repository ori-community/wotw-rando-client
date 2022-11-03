#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamManager {
        inline app::SteamManager__Class** type_info = (app::SteamManager__Class**)(modloader::win::memory::resolve_rva(0x04798D28));
        inline app::SteamManager__Class* get_class() {
            return il2cpp::get_class<app::SteamManager__Class>(type_info, "", "SteamManager");
        }
        inline app::SteamManager* create() {
            return il2cpp::create_object<app::SteamManager>(get_class());
        }
    } // namespace SteamManager
} // namespace app::classes::types
