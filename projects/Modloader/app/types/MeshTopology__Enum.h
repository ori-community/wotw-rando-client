#pragma once
#include <Modloader/app/structs/MeshTopology__Enum.h>
#include <Modloader/app/structs/MeshTopology__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshTopology__Enum {
        inline app::MeshTopology__Enum__Class** type_info() {
            static app::MeshTopology__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeshTopology__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeshTopology__Enum__Class* get_class() {
            return il2cpp::get_class<app::MeshTopology__Enum__Class>(type_info(), "UnityEngine", "MeshTopology");
        }
        inline app::MeshTopology__Enum* create() {
            return il2cpp::create_object<app::MeshTopology__Enum>(get_class());
        }
    } // namespace MeshTopology__Enum
} // namespace app::classes::types
