#pragma once
#include <Modloader/app/structs/PostLateUpdate_ProfilerSynchronizeStats.h>
#include <Modloader/app/structs/PostLateUpdate_ProfilerSynchronizeStats__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_ProfilerSynchronizeStats__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_ProfilerSynchronizeStats {
        inline app::PostLateUpdate_ProfilerSynchronizeStats__Class** type_info() {
            static app::PostLateUpdate_ProfilerSynchronizeStats__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_ProfilerSynchronizeStats__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_ProfilerSynchronizeStats__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_ProfilerSynchronizeStats__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "ProfilerSynchronizeStats");
        }
        inline app::PostLateUpdate_ProfilerSynchronizeStats* create() {
            return il2cpp::create_object<app::PostLateUpdate_ProfilerSynchronizeStats>(get_class());
        }
        inline app::PostLateUpdate_ProfilerSynchronizeStats__Boxed* box(app::PostLateUpdate_ProfilerSynchronizeStats value) {
            return il2cpp::box_value<app::PostLateUpdate_ProfilerSynchronizeStats__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_ProfilerSynchronizeStats
} // namespace app::classes::types
