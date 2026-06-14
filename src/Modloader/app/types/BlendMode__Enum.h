#pragma once
#include <Modloader/app/structs/BlendMode__Enum.h>
#include <Modloader/app/structs/BlendMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendMode__Enum {
        inline app::BlendMode__Enum__Class** type_info() {
            static app::BlendMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlendMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlendMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::BlendMode__Enum__Class>(type_info(), "UnityEngine.Rendering", "BlendMode");
        }
        inline app::BlendMode__Enum* create() {
            return il2cpp::create_object<app::BlendMode__Enum>(get_class());
        }
    } // namespace BlendMode__Enum
} // namespace app::classes::types
