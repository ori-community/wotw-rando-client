#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EditorScene {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EditorScene__Class** type_info;
        inline app::EditorScene__Class* get_class() {
            return il2cpp::get_class<app::EditorScene__Class>(type_info, "", "EditorScene");
        }
        inline app::EditorScene* create() {
            return il2cpp::create_object<app::EditorScene>(get_class());
        }
    } // namespace EditorScene
} // namespace app::classes::types
