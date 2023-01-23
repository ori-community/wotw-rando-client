#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextureCreationFlags__Enum__Class.h>
#include <Modloader/app/structs/TextureCreationFlags__Enum.h>

namespace app::classes::types {
    namespace TextureCreationFlags__Enum {
        namespace {
            inline app::TextureCreationFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TextureCreationFlags__Enum__Class** type_info = &type_info_ref;
        inline app::TextureCreationFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureCreationFlags__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "TextureCreationFlags");
        }
        inline app::TextureCreationFlags__Enum* create() {
            return il2cpp::create_object<app::TextureCreationFlags__Enum>(get_class());
        }
    } // namespace TextureCreationFlags__Enum
} // namespace app::classes::types
