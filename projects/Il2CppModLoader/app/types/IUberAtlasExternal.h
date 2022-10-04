#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUberAtlasExternal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUberAtlasExternal__Class** type_info;
        inline app::IUberAtlasExternal__Class* get_class() {
            return il2cpp::get_class<app::IUberAtlasExternal__Class>(type_info, "", "IUberAtlasExternal");
        }
    } // namespace IUberAtlasExternal
} // namespace app::classes::types
