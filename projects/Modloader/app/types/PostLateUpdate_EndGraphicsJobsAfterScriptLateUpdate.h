#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Class.h>
#include <Modloader/app/structs/PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate.h>
#include <Modloader/app/structs/PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Boxed.h>

namespace app::classes::types {
    namespace PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate {
        namespace {
            inline app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "EndGraphicsJobsAfterScriptLateUpdate");
        }
        inline app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate>(get_class());
        }
        inline app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Boxed* box(app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate
} // namespace app::classes::types
