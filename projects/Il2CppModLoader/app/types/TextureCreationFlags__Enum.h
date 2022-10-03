#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureCreationFlags__Enum {
        namespace {
            app::TextureCreationFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::TextureCreationFlags__Enum__Class** type_info = &type_info_ref;
        inline app::TextureCreationFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureCreationFlags__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "TextureCreationFlags");
        }
        inline app::TextureCreationFlags__Enum* create() {
            return il2cpp::create_object<app::TextureCreationFlags__Enum>(get_class());
        }
    } // namespace TextureCreationFlags__Enum
} // namespace app::classes::types
