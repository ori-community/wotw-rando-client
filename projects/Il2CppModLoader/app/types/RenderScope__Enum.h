#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderScope__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderScope__Enum__Class** type_info;
        inline app::RenderScope__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderScope__Enum__Class>(type_info, "Moon.Rendering", "RenderScope");
        }
        inline app::RenderScope__Enum* create() {
            return il2cpp::create_object<app::RenderScope__Enum>(get_class());
        }
    } // namespace RenderScope__Enum
} // namespace app::classes::types
