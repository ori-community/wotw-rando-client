#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PersistentEditorOnlySceneComponent {
        namespace {
            app::PersistentEditorOnlySceneComponent__Class* type_info_ref = nullptr;
        }
        app::PersistentEditorOnlySceneComponent__Class** type_info = &type_info_ref;
        inline app::PersistentEditorOnlySceneComponent__Class* get_class() {
            return il2cpp::get_class<app::PersistentEditorOnlySceneComponent__Class>(type_info, "", "PersistentEditorOnlySceneComponent");
        }
        inline app::PersistentEditorOnlySceneComponent* create() {
            return il2cpp::create_object<app::PersistentEditorOnlySceneComponent>(get_class());
        }
    } // namespace PersistentEditorOnlySceneComponent
} // namespace app::classes::types
