#pragma once
#include <Modloader/app/structs/FogMode__Enum.h>
#include <Modloader/app/structs/FogMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FogMode__Enum {
        inline app::FogMode__Enum__Class** type_info() {
            static app::FogMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FogMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FogMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FogMode__Enum__Class>(type_info(), "UnityEngine", "FogMode");
        }
        inline app::FogMode__Enum* create() {
            return il2cpp::create_object<app::FogMode__Enum>(get_class());
        }
    } // namespace FogMode__Enum
} // namespace app::classes::types
