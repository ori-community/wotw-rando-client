#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PersistentEditorOnlySceneComponent__Class.h>
#include <Modloader/app/structs/PersistentEditorOnlySceneComponent.h>

namespace app::classes::types {
    namespace PersistentEditorOnlySceneComponent {
        namespace {
            inline app::PersistentEditorOnlySceneComponent__Class* type_info_ref = nullptr;
        }
        inline app::PersistentEditorOnlySceneComponent__Class** type_info = &type_info_ref;
        inline app::PersistentEditorOnlySceneComponent__Class* get_class() {
            return il2cpp::get_class<app::PersistentEditorOnlySceneComponent__Class>(type_info, "", "PersistentEditorOnlySceneComponent");
        }
        inline app::PersistentEditorOnlySceneComponent* create() {
            return il2cpp::create_object<app::PersistentEditorOnlySceneComponent>(get_class());
        }
    } // namespace PersistentEditorOnlySceneComponent
} // namespace app::classes::types
