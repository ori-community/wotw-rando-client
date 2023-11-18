#pragma once
#include <Modloader/app/structs/TextureVisualizeMode__Enum.h>
#include <Modloader/app/structs/TextureVisualizeMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureVisualizeMode__Enum {
        inline app::TextureVisualizeMode__Enum__Class** type_info() {
            static app::TextureVisualizeMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureVisualizeMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureVisualizeMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureVisualizeMode__Enum__Class>(type_info(), "", "TextureVisualizeMode");
        }
        inline app::TextureVisualizeMode__Enum* create() {
            return il2cpp::create_object<app::TextureVisualizeMode__Enum>(get_class());
        }
    } // namespace TextureVisualizeMode__Enum
} // namespace app::classes::types
