#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlendOp__Enum {
        namespace {
            app::BlendOp__Enum__Class* type_info_ref = nullptr;
        }
        app::BlendOp__Enum__Class** type_info = &type_info_ref;
        inline app::BlendOp__Enum__Class* get_class() {
            return il2cpp::get_class<app::BlendOp__Enum__Class>(type_info, "UnityEngine.Rendering", "BlendOp");
        }
        inline app::BlendOp__Enum* create() {
            return il2cpp::create_object<app::BlendOp__Enum>(get_class());
        }
    } // namespace BlendOp__Enum
} // namespace app::classes::types
