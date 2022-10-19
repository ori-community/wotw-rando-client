#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VersionInfo {
        inline app::VersionInfo__Class** type_info = (app::VersionInfo__Class**)(modloader::win::memory::resolve_rva(0x047843C0));
        inline app::VersionInfo__Class* get_class() {
            return il2cpp::get_class<app::VersionInfo__Class>(type_info, "AmplifyColor", "VersionInfo");
        }
        inline app::VersionInfo* create() {
            return il2cpp::create_object<app::VersionInfo>(get_class());
        }
    } // namespace VersionInfo
} // namespace app::classes::types
