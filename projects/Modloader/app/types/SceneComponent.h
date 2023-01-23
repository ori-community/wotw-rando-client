#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneComponent__Class.h>
#include <Modloader/app/structs/SceneComponent.h>

namespace app::classes::types {
    namespace SceneComponent {
        namespace {
            inline app::SceneComponent__Class* type_info_ref = nullptr;
        }
        inline app::SceneComponent__Class** type_info = &type_info_ref;
        inline app::SceneComponent__Class* get_class() {
            return il2cpp::get_class<app::SceneComponent__Class>(type_info, "Moon.SceneManagement", "SceneComponent");
        }
        inline app::SceneComponent* create() {
            return il2cpp::create_object<app::SceneComponent>(get_class());
        }
    } // namespace SceneComponent
} // namespace app::classes::types
