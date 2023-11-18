#pragma once
#include <Modloader/app/structs/DepthState.h>
#include <Modloader/app/structs/DepthState__Boxed.h>
#include <Modloader/app/structs/DepthState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthState {
        inline app::DepthState__Class** type_info() {
            static app::DepthState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DepthState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DepthState__Class* get_class() {
            return il2cpp::get_class<app::DepthState__Class>(type_info(), "UnityEngine.Experimental.Rendering", "DepthState");
        }
        inline app::DepthState* create() {
            return il2cpp::create_object<app::DepthState>(get_class());
        }
        inline app::DepthState__Boxed* box(app::DepthState value) {
            return il2cpp::box_value<app::DepthState__Boxed>(get_class(), value);
        }
    } // namespace DepthState
} // namespace app::classes::types
