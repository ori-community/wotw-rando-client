#pragma once
#include <Modloader/app/structs/SceneDebugMessage.h>
#include <Modloader/app/structs/SceneDebugMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneDebugMessage {
        inline app::SceneDebugMessage__Class** type_info() {
            static app::SceneDebugMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneDebugMessage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneDebugMessage__Class* get_class() {
            return il2cpp::get_class<app::SceneDebugMessage__Class>(type_info(), "", "SceneDebugMessage");
        }
        inline app::SceneDebugMessage* create() {
            return il2cpp::create_object<app::SceneDebugMessage>(get_class());
        }
    } // namespace SceneDebugMessage
} // namespace app::classes::types
