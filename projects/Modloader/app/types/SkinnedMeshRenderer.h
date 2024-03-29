#pragma once
#include <Modloader/app/structs/SkinnedMeshRenderer.h>
#include <Modloader/app/structs/SkinnedMeshRenderer__Array.h>
#include <Modloader/app/structs/SkinnedMeshRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkinnedMeshRenderer {
        inline app::SkinnedMeshRenderer__Class** type_info() {
            static app::SkinnedMeshRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkinnedMeshRenderer__Class**)(modloader::win::memory::resolve_rva(0x04721E58));
            }
            return cache;
        }
        inline app::SkinnedMeshRenderer__Class* get_class() {
            return il2cpp::get_class<app::SkinnedMeshRenderer__Class>(type_info(), "UnityEngine", "SkinnedMeshRenderer");
        }
        inline app::SkinnedMeshRenderer* create() {
            return il2cpp::create_object<app::SkinnedMeshRenderer>(get_class());
        }
        inline app::SkinnedMeshRenderer__Array* create_array(int size) {
            return il2cpp::array_new<app::SkinnedMeshRenderer__Array>(get_class(), size);
        }
        inline app::SkinnedMeshRenderer__Array* create_array(const std::vector<app::SkinnedMeshRenderer*>& items) {
            return il2cpp::array_new<app::SkinnedMeshRenderer__Array>(get_class(), items);
        }
    } // namespace SkinnedMeshRenderer
} // namespace app::classes::types
