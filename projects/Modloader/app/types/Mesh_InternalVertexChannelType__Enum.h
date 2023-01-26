#pragma once
#include <Modloader/app/structs/Mesh_InternalVertexChannelType__Enum.h>
#include <Modloader/app/structs/Mesh_InternalVertexChannelType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Mesh_InternalVertexChannelType__Enum {
        inline app::Mesh_InternalVertexChannelType__Enum__Class** type_info() {
            static app::Mesh_InternalVertexChannelType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Mesh_InternalVertexChannelType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Mesh_InternalVertexChannelType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Mesh_InternalVertexChannelType__Enum__Class>(type_info(), "UnityEngine", "Mesh", "InternalVertexChannelType");
        }
        inline app::Mesh_InternalVertexChannelType__Enum* create() {
            return il2cpp::create_object<app::Mesh_InternalVertexChannelType__Enum>(get_class());
        }
    } // namespace Mesh_InternalVertexChannelType__Enum
} // namespace app::classes::types
