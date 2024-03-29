#pragma once
#include <Modloader/app/structs/MeshVertexAttributes__Enum.h>
#include <Modloader/app/structs/MeshVertexAttributes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshVertexAttributes__Enum {
        inline app::MeshVertexAttributes__Enum__Class** type_info() {
            static app::MeshVertexAttributes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeshVertexAttributes__Enum__Class**)(modloader::win::memory::resolve_rva(0x04771AB0));
            }
            return cache;
        }
        inline app::MeshVertexAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::MeshVertexAttributes__Enum__Class>(type_info(), "UnityEngine.Experimental.XR", "MeshVertexAttributes");
        }
        inline app::MeshVertexAttributes__Enum* create() {
            return il2cpp::create_object<app::MeshVertexAttributes__Enum>(get_class());
        }
    } // namespace MeshVertexAttributes__Enum
} // namespace app::classes::types
