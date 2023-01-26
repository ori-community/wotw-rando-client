#pragma once
#include <Modloader/app/structs/PreRecordingDynamicSceneObjectEntry__Array.h>
#include <Modloader/app/structs/PreRecordingDynamicSceneObjectEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreRecordingDynamicSceneObjectEntry__Array {
        inline app::PreRecordingDynamicSceneObjectEntry__Array__Class** type_info() {
            static app::PreRecordingDynamicSceneObjectEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreRecordingDynamicSceneObjectEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreRecordingDynamicSceneObjectEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::PreRecordingDynamicSceneObjectEntry__Array__Class>(type_info(), "", "PreRecordingDynamicSceneObjectEntry[]");
        }
        inline app::PreRecordingDynamicSceneObjectEntry__Array* create() {
            return il2cpp::create_object<app::PreRecordingDynamicSceneObjectEntry__Array>(get_class());
        }
    } // namespace PreRecordingDynamicSceneObjectEntry__Array
} // namespace app::classes::types
