#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TileFlags__Enum {
        namespace {
            app::TileFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::TileFlags__Enum__Class** type_info = &type_info_ref;
        inline app::TileFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::TileFlags__Enum__Class>(type_info, "UnityEngine.Tilemaps", "TileFlags");
        }
        inline app::TileFlags__Enum* create() {
            return il2cpp::create_object<app::TileFlags__Enum>(get_class());
        }
    } // namespace TileFlags__Enum
} // namespace app::classes::types
