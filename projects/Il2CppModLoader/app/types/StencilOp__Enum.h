#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StencilOp__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StencilOp__Enum__Class** type_info;
        inline app::StencilOp__Enum__Class* get_class() {
            return il2cpp::get_class<app::StencilOp__Enum__Class>(type_info, "UnityEngine.Rendering", "StencilOp");
        }
        inline app::StencilOp__Enum* create() {
            return il2cpp::create_object<app::StencilOp__Enum>(get_class());
        }
    } // namespace StencilOp__Enum
} // namespace app::classes::types
