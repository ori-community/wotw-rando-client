#pragma once
#include <Modloader/app/structs/RenderMode__Enum.h>
#include <Modloader/app/structs/RenderMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderMode__Enum {
        inline app::RenderMode__Enum__Class** type_info() {
            static app::RenderMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RenderMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RenderMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderMode__Enum__Class>(type_info(), "UnityEngine", "RenderMode");
        }
        inline app::RenderMode__Enum* create() {
            return il2cpp::create_object<app::RenderMode__Enum>(get_class());
        }
    } // namespace RenderMode__Enum
} // namespace app::classes::types
