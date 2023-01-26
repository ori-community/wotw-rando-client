#pragma once
#include <Modloader/app/structs/SkinnedMeshLod.h>
#include <Modloader/app/structs/SkinnedMeshLod__Array.h>
#include <Modloader/app/structs/SkinnedMeshLod__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkinnedMeshLod {
        inline app::SkinnedMeshLod__Class** type_info() {
            static app::SkinnedMeshLod__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkinnedMeshLod__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkinnedMeshLod__Class* get_class() {
            return il2cpp::get_class<app::SkinnedMeshLod__Class>(type_info(), "", "SkinnedMeshLod");
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
