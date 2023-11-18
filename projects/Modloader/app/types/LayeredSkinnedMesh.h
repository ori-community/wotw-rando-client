#pragma once
#include <Modloader/app/structs/LayeredSkinnedMesh.h>
#include <Modloader/app/structs/LayeredSkinnedMesh__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LayeredSkinnedMesh {
        inline app::LayeredSkinnedMesh__Class** type_info() {
            static app::LayeredSkinnedMesh__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LayeredSkinnedMesh__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LayeredSkinnedMesh__Class* get_class() {
            return il2cpp::get_class<app::LayeredSkinnedMesh__Class>(type_info(), "LayeredRender", "LayeredSkinnedMesh");
        }
        inline app::LayeredSkinnedMesh* create() {
            return il2cpp::create_object<app::LayeredSkinnedMesh>(get_class());
        }
    } // namespace LayeredSkinnedMesh
} // namespace app::classes::types
