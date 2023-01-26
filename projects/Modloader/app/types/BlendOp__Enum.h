#pragma once
#include <Modloader/app/structs/BlendOp__Enum.h>
#include <Modloader/app/structs/BlendOp__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendOp__Enum {
        inline app::BlendOp__Enum__Class** type_info() {
            static app::BlendOp__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlendOp__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlendOp__Enum__Class* get_class() {
            return il2cpp::get_class<app::BlendOp__Enum__Class>(type_info(), "UnityEngine.Rendering", "BlendOp");
        }
        inline app::BlendOp__Enum* create() {
            return il2cpp::create_object<app::BlendOp__Enum>(get_class());
        }
    } // namespace BlendOp__Enum
} // namespace app::classes::types
