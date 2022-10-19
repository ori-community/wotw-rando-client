#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUberAtlasExternal {
        inline app::IUberAtlasExternal__Class** type_info = (app::IUberAtlasExternal__Class**)(modloader::win::memory::resolve_rva(0x0476C098));
        inline app::IUberAtlasExternal__Class* get_class() {
            return il2cpp::get_class<app::IUberAtlasExternal__Class>(type_info, "", "IUberAtlasExternal");
        }
    } // namespace IUberAtlasExternal
} // namespace app::classes::types
