#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneState__Enum {
        inline app::SceneState__Enum__Class** type_info = (app::SceneState__Enum__Class**)(modloader::win::memory::resolve_rva(0x047856F8));
        inline app::SceneState__Enum__Class* get_class() {
            return il2cpp::get_class<app::SceneState__Enum__Class>(type_info, "", "SceneState");
        }
        inline app::SceneState__Enum* create() {
            return il2cpp::create_object<app::SceneState__Enum>(get_class());
        }
    } // namespace SceneState__Enum
} // namespace app::classes::types
