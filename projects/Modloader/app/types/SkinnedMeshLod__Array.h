#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkinnedMeshLod__Array {
        namespace {
            inline app::SkinnedMeshLod__Array__Class* type_info_ref = nullptr;
        }
        inline app::SkinnedMeshLod__Array__Class** type_info = &type_info_ref;
        inline app::SkinnedMeshLod__Array__Class* get_class() {
            return il2cpp::get_class<app::SkinnedMeshLod__Array__Class>(type_info, "", "SkinnedMeshLod[]");
        }
        inline app::SkinnedMeshLod__Array* create() {
            return il2cpp::create_object<app::SkinnedMeshLod__Array>(get_class());
        }
    } // namespace SkinnedMeshLod__Array
} // namespace app::classes::types
