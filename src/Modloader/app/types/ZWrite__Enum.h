#pragma once
#include <Modloader/app/structs/ZWrite__Enum.h>
#include <Modloader/app/structs/ZWrite__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZWrite__Enum {
        inline app::ZWrite__Enum__Class** type_info() {
            static app::ZWrite__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZWrite__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZWrite__Enum__Class* get_class() {
            return il2cpp::get_class<app::ZWrite__Enum__Class>(type_info(), "UnityEngine.Rendering", "ZWrite");
        }
        inline app::ZWrite__Enum* create() {
            return il2cpp::create_object<app::ZWrite__Enum>(get_class());
        }
    } // namespace ZWrite__Enum
} // namespace app::classes::types
