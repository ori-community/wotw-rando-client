#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPlayerEditorConnectionNative {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPlayerEditorConnectionNative__Class** type_info;
        inline app::IPlayerEditorConnectionNative__Class* get_class() {
            return il2cpp::get_class<app::IPlayerEditorConnectionNative__Class>(type_info, "UnityEngine", "IPlayerEditorConnectionNative");
        }
    } // namespace IPlayerEditorConnectionNative
} // namespace app::classes::types
