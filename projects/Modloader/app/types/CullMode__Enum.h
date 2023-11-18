#pragma once
#include <Modloader/app/structs/CullMode__Enum.h>
#include <Modloader/app/structs/CullMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CullMode__Enum {
        inline app::CullMode__Enum__Class** type_info() {
            static app::CullMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CullMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CullMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CullMode__Enum__Class>(type_info(), "UnityEngine.Rendering", "CullMode");
        }
        inline app::CullMode__Enum* create() {
            return il2cpp::create_object<app::CullMode__Enum>(get_class());
        }
    } // namespace CullMode__Enum
} // namespace app::classes::types
