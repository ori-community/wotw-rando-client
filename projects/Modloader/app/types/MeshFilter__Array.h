#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeshFilter__Array {
        namespace {
            inline app::MeshFilter__Array__Class* type_info_ref = nullptr;
        }
        inline app::MeshFilter__Array__Class** type_info = &type_info_ref;
        inline app::MeshFilter__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshFilter__Array__Class>(type_info, "UnityEngine", "MeshFilter[]");
        }
        inline app::MeshFilter__Array* create() {
            return il2cpp::create_object<app::MeshFilter__Array>(get_class());
        }
    } // namespace MeshFilter__Array
} // namespace app::classes::types
