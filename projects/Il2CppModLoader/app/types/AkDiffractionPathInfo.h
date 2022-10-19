#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkDiffractionPathInfo {
        inline app::AkDiffractionPathInfo__Class** type_info = (app::AkDiffractionPathInfo__Class**)(modloader::win::memory::resolve_rva(0x0472A9C0));
        inline app::AkDiffractionPathInfo__Class* get_class() {
            return il2cpp::get_class<app::AkDiffractionPathInfo__Class>(type_info, "", "AkDiffractionPathInfo");
        }
        inline app::AkDiffractionPathInfo* create() {
            return il2cpp::create_object<app::AkDiffractionPathInfo>(get_class());
        }
    } // namespace AkDiffractionPathInfo
} // namespace app::classes::types
