#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MeshTopology__Enum__Class.h>
#include <Modloader/app/structs/MeshTopology__Enum.h>

namespace app::classes::types {
    namespace MeshTopology__Enum {
        namespace {
            inline app::MeshTopology__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MeshTopology__Enum__Class** type_info = &type_info_ref;
        inline app::MeshTopology__Enum__Class* get_class() {
            return il2cpp::get_class<app::MeshTopology__Enum__Class>(type_info, "UnityEngine", "MeshTopology");
        }
        inline app::MeshTopology__Enum* create() {
            return il2cpp::create_object<app::MeshTopology__Enum>(get_class());
        }
    } // namespace MeshTopology__Enum
} // namespace app::classes::types
