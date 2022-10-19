#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderTextureCreationFlags__Enum {
        namespace {
            inline app::RenderTextureCreationFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RenderTextureCreationFlags__Enum__Class** type_info = &type_info_ref;
        inline app::RenderTextureCreationFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderTextureCreationFlags__Enum__Class>(type_info, "UnityEngine", "RenderTextureCreationFlags");
        }
        inline app::RenderTextureCreationFlags__Enum* create() {
            return il2cpp::create_object<app::RenderTextureCreationFlags__Enum>(get_class());
        }
    } // namespace RenderTextureCreationFlags__Enum
} // namespace app::classes::types
