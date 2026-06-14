#pragma once
#include <Modloader/app/structs/ZTest__Enum.h>
#include <Modloader/app/structs/ZTest__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZTest__Enum {
        inline app::ZTest__Enum__Class** type_info() {
            static app::ZTest__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZTest__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZTest__Enum__Class* get_class() {
            return il2cpp::get_class<app::ZTest__Enum__Class>(type_info(), "UnityEngine.Rendering", "ZTest");
        }
        inline app::ZTest__Enum* create() {
            return il2cpp::create_object<app::ZTest__Enum>(get_class());
        }
    } // namespace ZTest__Enum
} // namespace app::classes::types
