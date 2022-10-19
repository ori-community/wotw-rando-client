#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneDeletionFlags__Enum {
        namespace {
            inline app::SceneDeletionFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SceneDeletionFlags__Enum__Class** type_info = &type_info_ref;
        inline app::SceneDeletionFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::SceneDeletionFlags__Enum__Class>(type_info, "Moon.EditorTools.SceneTracking", "SceneDeletionFlags");
        }
        inline app::SceneDeletionFlags__Enum* create() {
            return il2cpp::create_object<app::SceneDeletionFlags__Enum>(get_class());
        }
    } // namespace SceneDeletionFlags__Enum
} // namespace app::classes::types
