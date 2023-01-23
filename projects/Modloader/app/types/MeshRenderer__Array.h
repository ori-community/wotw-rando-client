#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MeshRenderer__Array__Class.h>
#include <Modloader/app/structs/MeshRenderer__Array.h>

namespace app::classes::types {
    namespace MeshRenderer__Array {
        namespace {
            inline app::MeshRenderer__Array__Class* type_info_ref = nullptr;
        }
        inline app::MeshRenderer__Array__Class** type_info = &type_info_ref;
        inline app::MeshRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshRenderer__Array__Class>(type_info, "UnityEngine", "MeshRenderer[]");
        }
        inline app::MeshRenderer__Array* create() {
            return il2cpp::create_object<app::MeshRenderer__Array>(get_class());
        }
    } // namespace MeshRenderer__Array
} // namespace app::classes::types
