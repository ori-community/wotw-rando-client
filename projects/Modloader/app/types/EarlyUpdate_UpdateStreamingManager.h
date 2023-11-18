#pragma once
#include <Modloader/app/structs/EarlyUpdate_UpdateStreamingManager.h>
#include <Modloader/app/structs/EarlyUpdate_UpdateStreamingManager__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_UpdateStreamingManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_UpdateStreamingManager {
        inline app::EarlyUpdate_UpdateStreamingManager__Class** type_info() {
            static app::EarlyUpdate_UpdateStreamingManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_UpdateStreamingManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_UpdateStreamingManager__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UpdateStreamingManager__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UpdateStreamingManager");
        }
        inline app::EarlyUpdate_UpdateStreamingManager* create() {
            return il2cpp::create_object<app::EarlyUpdate_UpdateStreamingManager>(get_class());
        }
        inline app::EarlyUpdate_UpdateStreamingManager__Boxed* box(app::EarlyUpdate_UpdateStreamingManager value) {
            return il2cpp::box_value<app::EarlyUpdate_UpdateStreamingManager__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UpdateStreamingManager
} // namespace app::classes::types
