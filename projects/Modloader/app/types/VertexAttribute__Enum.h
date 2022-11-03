#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VertexAttribute__Enum {
        namespace {
            inline app::VertexAttribute__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VertexAttribute__Enum__Class** type_info = &type_info_ref;
        inline app::VertexAttribute__Enum__Class* get_class() {
            return il2cpp::get_class<app::VertexAttribute__Enum__Class>(type_info, "UnityEngine.Rendering", "VertexAttribute");
        }
        inline app::VertexAttribute__Enum* create() {
            return il2cpp::create_object<app::VertexAttribute__Enum>(get_class());
        }
    } // namespace VertexAttribute__Enum
} // namespace app::classes::types
