#pragma once
#include <Modloader/app/structs/LightRenderMode__Enum.h>
#include <Modloader/app/structs/LightRenderMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightRenderMode__Enum {
        inline app::LightRenderMode__Enum__Class** type_info() {
            static app::LightRenderMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightRenderMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightRenderMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightRenderMode__Enum__Class>(type_info(), "UnityEngine", "LightRenderMode");
        }
        inline app::LightRenderMode__Enum* create() {
            return il2cpp::create_object<app::LightRenderMode__Enum>(get_class());
        }
    } // namespace LightRenderMode__Enum
} // namespace app::classes::types
