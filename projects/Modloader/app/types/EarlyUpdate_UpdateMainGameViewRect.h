#pragma once
#include <Modloader/app/structs/EarlyUpdate_UpdateMainGameViewRect.h>
#include <Modloader/app/structs/EarlyUpdate_UpdateMainGameViewRect__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_UpdateMainGameViewRect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_UpdateMainGameViewRect {
        inline app::EarlyUpdate_UpdateMainGameViewRect__Class** type_info() {
            static app::EarlyUpdate_UpdateMainGameViewRect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_UpdateMainGameViewRect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_UpdateMainGameViewRect__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UpdateMainGameViewRect__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UpdateMainGameViewRect");
        }
        inline app::EarlyUpdate_UpdateMainGameViewRect* create() {
            return il2cpp::create_object<app::EarlyUpdate_UpdateMainGameViewRect>(get_class());
        }
        inline app::EarlyUpdate_UpdateMainGameViewRect__Boxed* box(app::EarlyUpdate_UpdateMainGameViewRect value) {
            return il2cpp::box_value<app::EarlyUpdate_UpdateMainGameViewRect__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UpdateMainGameViewRect
} // namespace app::classes::types
