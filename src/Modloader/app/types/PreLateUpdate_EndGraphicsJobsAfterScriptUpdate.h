#pragma once
#include <Modloader/app/structs/PreLateUpdate_EndGraphicsJobsAfterScriptUpdate.h>
#include <Modloader/app/structs/PreLateUpdate_EndGraphicsJobsAfterScriptUpdate__Boxed.h>
#include <Modloader/app/structs/PreLateUpdate_EndGraphicsJobsAfterScriptUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate_EndGraphicsJobsAfterScriptUpdate {
        inline app::PreLateUpdate_EndGraphicsJobsAfterScriptUpdate__Class** type_info() {
            static app::PreLateUpdate_EndGraphicsJobsAfterScriptUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreLateUpdate_EndGraphicsJobsAfterScriptUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreLateUpdate_EndGraphicsJobsAfterScriptUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_EndGraphicsJobsAfterScriptUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "EndGraphicsJobsAfterScriptUpdate");
        }
        inline app::PreLateUpdate_EndGraphicsJobsAfterScriptUpdate* create() {
            return il2cpp::create_object<app::PreLateUpdate_EndGraphicsJobsAfterScriptUpdate>(get_class());
        }
        inline app::PreLateUpdate_EndGraphicsJobsAfterScriptUpdate__Boxed* box(app::PreLateUpdate_EndGraphicsJobsAfterScriptUpdate value) {
            return il2cpp::box_value<app::PreLateUpdate_EndGraphicsJobsAfterScriptUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_EndGraphicsJobsAfterScriptUpdate
} // namespace app::classes::types
