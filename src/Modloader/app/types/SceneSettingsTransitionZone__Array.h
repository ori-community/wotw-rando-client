#pragma once
#include <Modloader/app/structs/SceneSettingsTransitionZone__Array.h>
#include <Modloader/app/structs/SceneSettingsTransitionZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneSettingsTransitionZone__Array {
        inline app::SceneSettingsTransitionZone__Array__Class** type_info() {
            static app::SceneSettingsTransitionZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneSettingsTransitionZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneSettingsTransitionZone__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneSettingsTransitionZone__Array__Class>(type_info(), "", "SceneSettingsTransitionZone[]");
        }
        inline app::SceneSettingsTransitionZone__Array* create() {
            return il2cpp::create_object<app::SceneSettingsTransitionZone__Array>(get_class());
        }
    } // namespace SceneSettingsTransitionZone__Array
} // namespace app::classes::types
