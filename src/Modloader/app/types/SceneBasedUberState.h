#pragma once
#include <Modloader/app/structs/SceneBasedUberState.h>
#include <Modloader/app/structs/SceneBasedUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneBasedUberState {
        inline app::SceneBasedUberState__Class** type_info() {
            static app::SceneBasedUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneBasedUberState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneBasedUberState__Class* get_class() {
            return il2cpp::get_class<app::SceneBasedUberState__Class>(type_info(), "Moon.uberSerializationWisp", "SceneBasedUberState");
        }
        inline app::SceneBasedUberState* create() {
            return il2cpp::create_object<app::SceneBasedUberState>(get_class());
        }
    } // namespace SceneBasedUberState
} // namespace app::classes::types
