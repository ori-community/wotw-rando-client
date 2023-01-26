#pragma once
#include <Modloader/app/structs/RenderingType__Enum.h>
#include <Modloader/app/structs/RenderingType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderingType__Enum {
        inline app::RenderingType__Enum__Class** type_info() {
            static app::RenderingType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RenderingType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RenderingType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderingType__Enum__Class>(type_info(), "Moon.VisualDebug", "RenderingType");
        }
        inline app::RenderingType__Enum* create() {
            return il2cpp::create_object<app::RenderingType__Enum>(get_class());
        }
    } // namespace RenderingType__Enum
} // namespace app::classes::types
