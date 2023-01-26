#pragma once
#include <Modloader/app/structs/StencilOp__Enum.h>
#include <Modloader/app/structs/StencilOp__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StencilOp__Enum {
        inline app::StencilOp__Enum__Class** type_info() {
            static app::StencilOp__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StencilOp__Enum__Class**)(modloader::win::memory::resolve_rva(0x04710608));
            }
            return cache;
        }
        inline app::StencilOp__Enum__Class* get_class() {
            return il2cpp::get_class<app::StencilOp__Enum__Class>(type_info(), "UnityEngine.Rendering", "StencilOp");
        }
        inline app::StencilOp__Enum* create() {
            return il2cpp::create_object<app::StencilOp__Enum>(get_class());
        }
    } // namespace StencilOp__Enum
} // namespace app::classes::types
