#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlendOp__Enum {
        namespace {
            inline app::BlendOp__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BlendOp__Enum__Class** type_info = &type_info_ref;
        inline app::BlendOp__Enum__Class* get_class() {
            return il2cpp::get_class<app::BlendOp__Enum__Class>(type_info, "UnityEngine.Rendering", "BlendOp");
        }
        inline app::BlendOp__Enum* create() {
            return il2cpp::create_object<app::BlendOp__Enum>(get_class());
        }
    } // namespace BlendOp__Enum
} // namespace app::classes::types
