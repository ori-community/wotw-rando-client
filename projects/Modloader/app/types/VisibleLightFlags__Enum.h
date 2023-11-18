#pragma once
#include <Modloader/app/structs/VisibleLightFlags__Enum.h>
#include <Modloader/app/structs/VisibleLightFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VisibleLightFlags__Enum {
        inline app::VisibleLightFlags__Enum__Class** type_info() {
            static app::VisibleLightFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VisibleLightFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VisibleLightFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::VisibleLightFlags__Enum__Class>(type_info(), "UnityEngine.Experimental.Rendering", "VisibleLightFlags");
        }
        inline app::VisibleLightFlags__Enum* create() {
            return il2cpp::create_object<app::VisibleLightFlags__Enum>(get_class());
        }
    } // namespace VisibleLightFlags__Enum
} // namespace app::classes::types
