#pragma once
#include <Modloader/app/structs/WrapMode__Enum.h>
#include <Modloader/app/structs/WrapMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WrapMode__Enum {
        inline app::WrapMode__Enum__Class** type_info() {
            static app::WrapMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WrapMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WrapMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::WrapMode__Enum__Class>(type_info(), "UnityEngine", "WrapMode");
        }
        inline app::WrapMode__Enum* create() {
            return il2cpp::create_object<app::WrapMode__Enum>(get_class());
        }
    } // namespace WrapMode__Enum
} // namespace app::classes::types
