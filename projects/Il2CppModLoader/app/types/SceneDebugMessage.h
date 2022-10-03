#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneDebugMessage {
        namespace {
            app::SceneDebugMessage__Class* type_info_ref = nullptr;
        }
        app::SceneDebugMessage__Class** type_info = &type_info_ref;
        inline app::SceneDebugMessage__Class* get_class() {
            return il2cpp::get_class<app::SceneDebugMessage__Class>(type_info, "", "SceneDebugMessage");
        }
        inline app::SceneDebugMessage* create() {
            return il2cpp::create_object<app::SceneDebugMessage>(get_class());
        }
    } // namespace SceneDebugMessage
} // namespace app::classes::types
