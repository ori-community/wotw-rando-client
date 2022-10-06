#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MasterTimelineSequence_SceneSettings {
        namespace {
            app::MasterTimelineSequence_SceneSettings__Class* type_info_ref = nullptr;
        }
        app::MasterTimelineSequence_SceneSettings__Class** type_info = &type_info_ref;
        inline app::MasterTimelineSequence_SceneSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::MasterTimelineSequence_SceneSettings__Class>(type_info, "", "MasterTimelineSequence", "SceneSettings");
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
