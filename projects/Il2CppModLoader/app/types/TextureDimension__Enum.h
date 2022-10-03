#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureDimension__Enum {
        namespace {
            app::TextureDimension__Enum__Class* type_info_ref = nullptr;
        }
        app::TextureDimension__Enum__Class** type_info = &type_info_ref;
        inline app::TextureDimension__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureDimension__Enum__Class>(type_info, "UnityEngine.Rendering", "TextureDimension");
        }
        inline app::TextureDimension__Enum* create() {
            return il2cpp::create_object<app::TextureDimension__Enum>(get_class());
        }
    } // namespace TextureDimension__Enum
} // namespace app::classes::types
