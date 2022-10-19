#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPlayerEditorConnectionNative {
        inline app::IPlayerEditorConnectionNative__Class** type_info = (app::IPlayerEditorConnectionNative__Class**)(modloader::win::memory::resolve_rva(0x0472E9A8));
        inline app::IPlayerEditorConnectionNative__Class* get_class() {
            return il2cpp::get_class<app::IPlayerEditorConnectionNative__Class>(type_info, "UnityEngine", "IPlayerEditorConnectionNative");
        }
    } // namespace IPlayerEditorConnectionNative
} // namespace app::classes::types
