#pragma once
#include <Modloader/app/structs/PersistentEditorOnlySceneComponent.h>
#include <Modloader/app/structs/PersistentEditorOnlySceneComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PersistentEditorOnlySceneComponent {
        inline app::PersistentEditorOnlySceneComponent__Class** type_info() {
            static app::PersistentEditorOnlySceneComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PersistentEditorOnlySceneComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PersistentEditorOnlySceneComponent__Class* get_class() {
            return il2cpp::get_class<app::PersistentEditorOnlySceneComponent__Class>(type_info(), "", "PersistentEditorOnlySceneComponent");
        }
        inline app::PersistentEditorOnlySceneComponent* create() {
            return il2cpp::create_object<app::PersistentEditorOnlySceneComponent>(get_class());
        }
    } // namespace PersistentEditorOnlySceneComponent
} // namespace app::classes::types
