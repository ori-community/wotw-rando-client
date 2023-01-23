#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LayeredSkinnedMesh__Class.h>
#include <Modloader/app/structs/LayeredSkinnedMesh.h>

namespace app::classes::types {
    namespace LayeredSkinnedMesh {
        namespace {
            inline app::LayeredSkinnedMesh__Class* type_info_ref = nullptr;
        }
        inline app::LayeredSkinnedMesh__Class** type_info = &type_info_ref;
        inline app::LayeredSkinnedMesh__Class* get_class() {
            return il2cpp::get_class<app::LayeredSkinnedMesh__Class>(type_info, "LayeredRender", "LayeredSkinnedMesh");
        }
        inline app::LayeredSkinnedMesh* create() {
            return il2cpp::create_object<app::LayeredSkinnedMesh>(get_class());
        }
    } // namespace LayeredSkinnedMesh
} // namespace app::classes::types
