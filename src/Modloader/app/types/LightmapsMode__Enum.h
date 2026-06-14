#pragma once
#include <Modloader/app/structs/LightmapsMode__Enum.h>
#include <Modloader/app/structs/LightmapsMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightmapsMode__Enum {
        inline app::LightmapsMode__Enum__Class** type_info() {
            static app::LightmapsMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightmapsMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightmapsMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightmapsMode__Enum__Class>(type_info(), "UnityEngine", "LightmapsMode");
        }
        inline app::LightmapsMode__Enum* create() {
            return il2cpp::create_object<app::LightmapsMode__Enum>(get_class());
        }
    } // namespace LightmapsMode__Enum
} // namespace app::classes::types
