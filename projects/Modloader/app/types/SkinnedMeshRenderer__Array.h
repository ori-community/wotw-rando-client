#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkinnedMeshRenderer__Array__Class.h>
#include <Modloader/app/structs/SkinnedMeshRenderer__Array.h>

namespace app::classes::types {
    namespace SkinnedMeshRenderer__Array {
        namespace {
            inline app::SkinnedMeshRenderer__Array__Class* type_info_ref = nullptr;
        }
        inline app::SkinnedMeshRenderer__Array__Class** type_info = &type_info_ref;
        inline app::SkinnedMeshRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::SkinnedMeshRenderer__Array__Class>(type_info, "UnityEngine", "SkinnedMeshRenderer[]");
        }
        inline app::SkinnedMeshRenderer__Array* create() {
            return il2cpp::create_object<app::SkinnedMeshRenderer__Array>(get_class());
        }
    } // namespace SkinnedMeshRenderer__Array
} // namespace app::classes::types
