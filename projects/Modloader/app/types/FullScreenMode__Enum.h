#pragma once
#include <Modloader/app/structs/FullScreenMode__Enum.h>
#include <Modloader/app/structs/FullScreenMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FullScreenMode__Enum {
        inline app::FullScreenMode__Enum__Class** type_info() {
            static app::FullScreenMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FullScreenMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FullScreenMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FullScreenMode__Enum__Class>(type_info(), "UnityEngine", "FullScreenMode");
        }
        inline app::FullScreenMode__Enum* create() {
            return il2cpp::create_object<app::FullScreenMode__Enum>(get_class());
        }
    } // namespace FullScreenMode__Enum
} // namespace app::classes::types
