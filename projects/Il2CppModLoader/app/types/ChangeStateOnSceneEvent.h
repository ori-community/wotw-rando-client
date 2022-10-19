#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangeStateOnSceneEvent {
        namespace {
            inline app::ChangeStateOnSceneEvent__Class* type_info_ref = nullptr;
        }
        inline app::ChangeStateOnSceneEvent__Class** type_info = &type_info_ref;
        inline app::ChangeStateOnSceneEvent__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateOnSceneEvent__Class>(type_info, "Moon.Setups", "ChangeStateOnSceneEvent");
        }
        inline app::ChangeStateOnSceneEvent* create() {
            return il2cpp::create_object<app::ChangeStateOnSceneEvent>(get_class());
        }
    } // namespace ChangeStateOnSceneEvent
} // namespace app::classes::types
