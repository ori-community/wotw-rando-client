#pragma once
#include <Modloader/app/structs/MasterTimelineSequence_SceneSettings.h>
#include <Modloader/app/structs/MasterTimelineSequence_SceneSettings__Array.h>
#include <Modloader/app/structs/MasterTimelineSequence_SceneSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MasterTimelineSequence_SceneSettings {
        inline app::MasterTimelineSequence_SceneSettings__Class** type_info() {
            static app::MasterTimelineSequence_SceneSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MasterTimelineSequence_SceneSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MasterTimelineSequence_SceneSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::MasterTimelineSequence_SceneSettings__Class>(type_info(), "", "MasterTimelineSequence", "SceneSettings");
        }
        inline app::MasterTimelineSequence_SceneSettings* create() {
            return il2cpp::create_object<app::MasterTimelineSequence_SceneSettings>(get_class());
        }
        inline app::MasterTimelineSequence_SceneSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::MasterTimelineSequence_SceneSettings__Array>(get_class(), size);
        }
        inline app::MasterTimelineSequence_SceneSettings__Array* create_array(const std::vector<app::MasterTimelineSequence_SceneSettings*>& items) {
            return il2cpp::array_new<app::MasterTimelineSequence_SceneSettings__Array>(get_class(), items);
        }
    } // namespace MasterTimelineSequence_SceneSettings
} // namespace app::classes::types
