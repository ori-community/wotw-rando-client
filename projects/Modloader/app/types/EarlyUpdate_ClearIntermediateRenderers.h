#pragma once
#include <Modloader/app/structs/EarlyUpdate_ClearIntermediateRenderers.h>
#include <Modloader/app/structs/EarlyUpdate_ClearIntermediateRenderers__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_ClearIntermediateRenderers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_ClearIntermediateRenderers {
        inline app::EarlyUpdate_ClearIntermediateRenderers__Class** type_info() {
            static app::EarlyUpdate_ClearIntermediateRenderers__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_ClearIntermediateRenderers__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_ClearIntermediateRenderers__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_ClearIntermediateRenderers__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "ClearIntermediateRenderers");
        }
        inline app::EarlyUpdate_ClearIntermediateRenderers* create() {
            return il2cpp::create_object<app::EarlyUpdate_ClearIntermediateRenderers>(get_class());
        }
        inline app::EarlyUpdate_ClearIntermediateRenderers__Boxed* box(app::EarlyUpdate_ClearIntermediateRenderers value) {
            return il2cpp::box_value<app::EarlyUpdate_ClearIntermediateRenderers__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_ClearIntermediateRenderers
} // namespace app::classes::types
