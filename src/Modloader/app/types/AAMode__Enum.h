#pragma once
#include <Modloader/app/structs/AAMode__Enum.h>
#include <Modloader/app/structs/AAMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AAMode__Enum {
        inline app::AAMode__Enum__Class** type_info() {
            static app::AAMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AAMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AAMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AAMode__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "AAMode");
        }
        inline app::AAMode__Enum* create() {
            return il2cpp::create_object<app::AAMode__Enum>(get_class());
        }
    } // namespace AAMode__Enum
} // namespace app::classes::types
