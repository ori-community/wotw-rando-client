#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnsuspendSceneAction {
        namespace {
            inline app::UnsuspendSceneAction__Class* type_info_ref = nullptr;
        }
        inline app::UnsuspendSceneAction__Class** type_info = &type_info_ref;
        inline app::UnsuspendSceneAction__Class* get_class() {
            return il2cpp::get_class<app::UnsuspendSceneAction__Class>(type_info, "", "UnsuspendSceneAction");
        }
        inline app::UnsuspendSceneAction* create() {
            return il2cpp::create_object<app::UnsuspendSceneAction>(get_class());
        }
    } // namespace UnsuspendSceneAction
} // namespace app::classes::types
