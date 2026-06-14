#pragma once
#include <Modloader/app/structs/RenderStateMask__Enum.h>
#include <Modloader/app/structs/RenderStateMask__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderStateMask__Enum {
        inline app::RenderStateMask__Enum__Class** type_info() {
            static app::RenderStateMask__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RenderStateMask__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RenderStateMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderStateMask__Enum__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RenderStateMask");
        }
        inline app::RenderStateMask__Enum* create() {
            return il2cpp::create_object<app::RenderStateMask__Enum>(get_class());
        }
    } // namespace RenderStateMask__Enum
} // namespace app::classes::types
