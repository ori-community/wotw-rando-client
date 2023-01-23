#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MasterTimelineSequence_SceneSettings__Array__Class.h>
#include <Modloader/app/structs/MasterTimelineSequence_SceneSettings__Array.h>

namespace app::classes::types {
    namespace MasterTimelineSequence_SceneSettings__Array {
        namespace {
            inline app::MasterTimelineSequence_SceneSettings__Array__Class* type_info_ref = nullptr;
        }
        inline app::MasterTimelineSequence_SceneSettings__Array__Class** type_info = &type_info_ref;
        inline app::MasterTimelineSequence_SceneSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::MasterTimelineSequence_SceneSettings__Array__Class>(type_info, "", "MasterTimelineSequence+SceneSettings[]");
        }
        inline app::MasterTimelineSequence_SceneSettings__Array* create() {
            return il2cpp::create_object<app::MasterTimelineSequence_SceneSettings__Array>(get_class());
        }
    } // namespace MasterTimelineSequence_SceneSettings__Array
} // namespace app::classes::types
