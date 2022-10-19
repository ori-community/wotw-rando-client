#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureVisualizeMode__Enum {
        namespace {
            inline app::TextureVisualizeMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TextureVisualizeMode__Enum__Class** type_info = &type_info_ref;
        inline app::TextureVisualizeMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureVisualizeMode__Enum__Class>(type_info, "", "TextureVisualizeMode");
        }
        inline app::TextureVisualizeMode__Enum* create() {
            return il2cpp::create_object<app::TextureVisualizeMode__Enum>(get_class());
        }
    } // namespace TextureVisualizeMode__Enum
} // namespace app::classes::types
