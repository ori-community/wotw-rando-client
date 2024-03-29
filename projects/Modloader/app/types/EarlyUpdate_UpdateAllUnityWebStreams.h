#pragma once
#include <Modloader/app/structs/EarlyUpdate_UpdateAllUnityWebStreams.h>
#include <Modloader/app/structs/EarlyUpdate_UpdateAllUnityWebStreams__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_UpdateAllUnityWebStreams__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_UpdateAllUnityWebStreams {
        inline app::EarlyUpdate_UpdateAllUnityWebStreams__Class** type_info() {
            static app::EarlyUpdate_UpdateAllUnityWebStreams__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_UpdateAllUnityWebStreams__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_UpdateAllUnityWebStreams__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UpdateAllUnityWebStreams__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UpdateAllUnityWebStreams");
        }
        inline app::EarlyUpdate_UpdateAllUnityWebStreams* create() {
            return il2cpp::create_object<app::EarlyUpdate_UpdateAllUnityWebStreams>(get_class());
        }
        inline app::EarlyUpdate_UpdateAllUnityWebStreams__Boxed* box(app::EarlyUpdate_UpdateAllUnityWebStreams value) {
            return il2cpp::box_value<app::EarlyUpdate_UpdateAllUnityWebStreams__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UpdateAllUnityWebStreams
} // namespace app::classes::types
