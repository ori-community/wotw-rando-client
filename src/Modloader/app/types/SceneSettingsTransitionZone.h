#pragma once
#include <Modloader/app/structs/SceneSettingsTransitionZone.h>
#include <Modloader/app/structs/SceneSettingsTransitionZone__Array.h>
#include <Modloader/app/structs/SceneSettingsTransitionZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneSettingsTransitionZone {
        inline app::SceneSettingsTransitionZone__Class** type_info() {
            static app::SceneSettingsTransitionZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneSettingsTransitionZone__Class**)(modloader::win::memory::resolve_rva(0x04731B40));
            }
            return cache;
        }
        inline app::SceneSettingsTransitionZone__Class* get_class() {
            return il2cpp::get_class<app::SceneSettingsTransitionZone__Class>(type_info(), "", "SceneSettingsTransitionZone");
        }
        inline app::SceneSettingsTransitionZone* create() {
            return il2cpp::create_object<app::SceneSettingsTransitionZone>(get_class());
        }
        inline app::SceneSettingsTransitionZone__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneSettingsTransitionZone__Array>(get_class(), size);
        }
        inline app::SceneSettingsTransitionZone__Array* create_array(const std::vector<app::SceneSettingsTransitionZone*>& items) {
            return il2cpp::array_new<app::SceneSettingsTransitionZone__Array>(get_class(), items);
        }
    } // namespace SceneSettingsTransitionZone
} // namespace app::classes::types
