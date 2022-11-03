#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneBasedUberState {
        namespace {
            inline app::SceneBasedUberState__Class* type_info_ref = nullptr;
        }
        inline app::SceneBasedUberState__Class** type_info = &type_info_ref;
        inline app::SceneBasedUberState__Class* get_class() {
            return il2cpp::get_class<app::SceneBasedUberState__Class>(type_info, "Moon.uberSerializationWisp", "SceneBasedUberState");
        }
        inline app::SceneBasedUberState* create() {
            return il2cpp::create_object<app::SceneBasedUberState>(get_class());
        }
    } // namespace SceneBasedUberState
} // namespace app::classes::types
