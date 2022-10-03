#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureWrapMode__Enum {
        namespace {
            app::TextureWrapMode__Enum__Class* type_info_ref = nullptr;
        }
        app::TextureWrapMode__Enum__Class** type_info = &type_info_ref;
        inline app::TextureWrapMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureWrapMode__Enum__Class>(type_info, "UnityEngine", "TextureWrapMode");
        }
        inline app::TextureWrapMode__Enum* create() {
            return il2cpp::create_object<app::TextureWrapMode__Enum>(get_class());
        }
    } // namespace TextureWrapMode__Enum
} // namespace app::classes::types
