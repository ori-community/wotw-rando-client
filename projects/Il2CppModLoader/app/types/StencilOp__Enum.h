#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StencilOp__Enum {
        inline app::StencilOp__Enum__Class** type_info = (app::StencilOp__Enum__Class**)(modloader::win::memory::resolve_rva(0x04710608));
        inline app::StencilOp__Enum__Class* get_class() {
            return il2cpp::get_class<app::StencilOp__Enum__Class>(type_info, "UnityEngine.Rendering", "StencilOp");
        }
        inline app::StencilOp__Enum* create() {
            return il2cpp::create_object<app::StencilOp__Enum>(get_class());
        }
    } // namespace StencilOp__Enum
} // namespace app::classes::types
