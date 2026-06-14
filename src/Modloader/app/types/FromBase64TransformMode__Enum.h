#pragma once
#include <Modloader/app/structs/FromBase64TransformMode__Enum.h>
#include <Modloader/app/structs/FromBase64TransformMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FromBase64TransformMode__Enum {
        inline app::FromBase64TransformMode__Enum__Class** type_info() {
            static app::FromBase64TransformMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FromBase64TransformMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FromBase64TransformMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FromBase64TransformMode__Enum__Class>(type_info(), "System.Security.Cryptography", "FromBase64TransformMode");
        }
        inline app::FromBase64TransformMode__Enum* create() {
            return il2cpp::create_object<app::FromBase64TransformMode__Enum>(get_class());
        }
    } // namespace FromBase64TransformMode__Enum
} // namespace app::classes::types
