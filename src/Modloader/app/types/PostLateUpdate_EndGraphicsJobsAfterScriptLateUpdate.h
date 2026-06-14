#pragma once
#include <Modloader/app/structs/PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate.h>
#include <Modloader/app/structs/PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate {
        inline app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Class** type_info() {
            static app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "EndGraphicsJobsAfterScriptLateUpdate");
        }
        inline app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate>(get_class());
        }
        inline app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Boxed* box(app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate
} // namespace app::classes::types
