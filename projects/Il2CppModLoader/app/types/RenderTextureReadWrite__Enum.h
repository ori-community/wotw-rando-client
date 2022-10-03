#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderTextureReadWrite__Enum {
        namespace {
            app::RenderTextureReadWrite__Enum__Class* type_info_ref = nullptr;
        }
        app::RenderTextureReadWrite__Enum__Class** type_info = &type_info_ref;
        inline app::RenderTextureReadWrite__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderTextureReadWrite__Enum__Class>(type_info, "UnityEngine", "RenderTextureReadWrite");
        }
        inline app::RenderTextureReadWrite__Enum* create() {
            return il2cpp::create_object<app::RenderTextureReadWrite__Enum>(get_class());
        }
    } // namespace RenderTextureReadWrite__Enum
} // namespace app::classes::types
