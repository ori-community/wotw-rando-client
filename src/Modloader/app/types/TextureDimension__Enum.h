#pragma once
#include <Modloader/app/structs/TextureDimension__Enum.h>
#include <Modloader/app/structs/TextureDimension__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureDimension__Enum {
        inline app::TextureDimension__Enum__Class** type_info() {
            static app::TextureDimension__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureDimension__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureDimension__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureDimension__Enum__Class>(type_info(), "UnityEngine.Rendering", "TextureDimension");
        }
        inline app::TextureDimension__Enum* create() {
            return il2cpp::create_object<app::TextureDimension__Enum>(get_class());
        }
    } // namespace TextureDimension__Enum
} // namespace app::classes::types
