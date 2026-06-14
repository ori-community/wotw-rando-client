#pragma once
#include <Modloader/app/structs/TileFlags__Enum.h>
#include <Modloader/app/structs/TileFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TileFlags__Enum {
        inline app::TileFlags__Enum__Class** type_info() {
            static app::TileFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TileFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TileFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::TileFlags__Enum__Class>(type_info(), "UnityEngine.Tilemaps", "TileFlags");
        }
        inline app::TileFlags__Enum* create() {
            return il2cpp::create_object<app::TileFlags__Enum>(get_class());
        }
    } // namespace TileFlags__Enum
} // namespace app::classes::types
