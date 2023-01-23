#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkinnedMeshLod__Class.h>
#include <Modloader/app/structs/SkinnedMeshLod.h>
#include <Modloader/app/structs/SkinnedMeshLod__Array.h>

namespace app::classes::types {
    namespace SkinnedMeshLod {
        namespace {
            inline app::SkinnedMeshLod__Class* type_info_ref = nullptr;
        }
        inline app::SkinnedMeshLod__Class** type_info = &type_info_ref;
        inline app::SkinnedMeshLod__Class* get_class() {
            return il2cpp::get_class<app::SkinnedMeshLod__Class>(type_info, "", "SkinnedMeshLod");
        }
        inline app::SkinnedMeshLod* create() {
            return il2cpp::create_object<app::SkinnedMeshLod>(get_class());
        }
        inline app::SkinnedMeshLod__Array* create_array(int size) {
            return il2cpp::array_new<app::SkinnedMeshLod__Array>(get_class(), size);
        }
        inline app::SkinnedMeshLod__Array* create_array(const std::vector<app::SkinnedMeshLod*>& items) {
            return il2cpp::array_new<app::SkinnedMeshLod__Array>(get_class(), items);
        }
    } // namespace SkinnedMeshLod
} // namespace app::classes::types
