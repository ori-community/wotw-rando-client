#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkinnedMeshLod {
        namespace {
            app::SkinnedMeshLod__Class* type_info_ref = nullptr;
        }
        app::SkinnedMeshLod__Class** type_info = &type_info_ref;
        inline app::SkinnedMeshLod__Class* get_class() {
            return il2cpp::get_class<app::SkinnedMeshLod__Class>(type_info, "", "SkinnedMeshLod");
        }
        inline app::SkinnedMeshLod* create() {
            return il2cpp::create_object<app::SkinnedMeshLod>(get_class());
        }
        inline app::SkinnedMeshLod__Array* create_array(int size) {
            return il2cpp::array_new<app::SkinnedMeshLod__Array>(get_class(), size);
        }
    } // namespace SkinnedMeshLod
} // namespace app::classes::types
