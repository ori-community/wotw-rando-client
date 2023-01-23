#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneSettingsTransitionZone__Array__Class.h>
#include <Modloader/app/structs/SceneSettingsTransitionZone__Array.h>

namespace app::classes::types {
    namespace SceneSettingsTransitionZone__Array {
        namespace {
            inline app::SceneSettingsTransitionZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::SceneSettingsTransitionZone__Array__Class** type_info = &type_info_ref;
        inline app::SceneSettingsTransitionZone__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneSettingsTransitionZone__Array__Class>(type_info, "", "SceneSettingsTransitionZone[]");
        }
        inline app::SceneSettingsTransitionZone__Array* create() {
            return il2cpp::create_object<app::SceneSettingsTransitionZone__Array>(get_class());
        }
    } // namespace SceneSettingsTransitionZone__Array
} // namespace app::classes::types
