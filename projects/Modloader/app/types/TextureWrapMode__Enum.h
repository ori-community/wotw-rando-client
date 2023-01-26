#pragma once
#include <Modloader/app/structs/TextureWrapMode__Enum.h>
#include <Modloader/app/structs/TextureWrapMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureWrapMode__Enum {
        inline app::TextureWrapMode__Enum__Class** type_info() {
            static app::TextureWrapMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureWrapMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureWrapMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureWrapMode__Enum__Class>(type_info(), "UnityEngine", "TextureWrapMode");
        }
        inline app::TextureWrapMode__Enum* create() {
            return il2cpp::create_object<app::TextureWrapMode__Enum>(get_class());
        }
    } // namespace TextureWrapMode__Enum
} // namespace app::classes::types
