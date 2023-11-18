#pragma once
#include <Modloader/app/structs/VertexAttribute__Enum.h>
#include <Modloader/app/structs/VertexAttribute__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VertexAttribute__Enum {
        inline app::VertexAttribute__Enum__Class** type_info() {
            static app::VertexAttribute__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VertexAttribute__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VertexAttribute__Enum__Class* get_class() {
            return il2cpp::get_class<app::VertexAttribute__Enum__Class>(type_info(), "UnityEngine.Rendering", "VertexAttribute");
        }
        inline app::VertexAttribute__Enum* create() {
            return il2cpp::create_object<app::VertexAttribute__Enum>(get_class());
        }
    } // namespace VertexAttribute__Enum
} // namespace app::classes::types
