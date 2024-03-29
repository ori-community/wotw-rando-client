#pragma once
#include <Modloader/app/structs/TextureUvMode__Enum.h>
#include <Modloader/app/structs/TextureUvMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureUvMode__Enum {
        inline app::TextureUvMode__Enum__Class** type_info() {
            static app::TextureUvMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureUvMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureUvMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureUvMode__Enum__Class>(type_info(), "", "TextureUvMode");
        }
        inline app::TextureUvMode__Enum* create() {
            return il2cpp::create_object<app::TextureUvMode__Enum>(get_class());
        }
    } // namespace TextureUvMode__Enum
} // namespace app::classes::types
