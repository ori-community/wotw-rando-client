#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISerializerPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISerializerPlugin__Class** type_info;
        inline app::ISerializerPlugin__Class* get_class() {
            return il2cpp::get_class<app::ISerializerPlugin__Class>(type_info, "PlayFab", "ISerializerPlugin");
        }
    } // namespace ISerializerPlugin
} // namespace app::classes::types
