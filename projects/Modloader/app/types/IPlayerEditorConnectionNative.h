#pragma once
#include <Modloader/app/structs/IPlayerEditorConnectionNative.h>
#include <Modloader/app/structs/IPlayerEditorConnectionNative__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPlayerEditorConnectionNative {
        inline app::IPlayerEditorConnectionNative__Class** type_info() {
            static app::IPlayerEditorConnectionNative__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPlayerEditorConnectionNative__Class**)(modloader::win::memory::resolve_rva(0x0472E9A8));
            }
            return cache;
        }
        inline app::IPlayerEditorConnectionNative__Class* get_class() {
            return il2cpp::get_class<app::IPlayerEditorConnectionNative__Class>(type_info(), "UnityEngine", "IPlayerEditorConnectionNative");
        }
    } // namespace IPlayerEditorConnectionNative
} // namespace app::classes::types
