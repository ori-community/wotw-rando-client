#pragma once
#include <Modloader/app/structs/SceneRootData.h>
#include <Modloader/app/structs/SceneRootData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneRootData {
        inline app::SceneRootData__Class** type_info() {
            static app::SceneRootData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneRootData__Class**)(modloader::win::memory::resolve_rva(0x04735F18));
            }
            return cache;
        }
        inline app::SceneRootData__Class* get_class() {
            return il2cpp::get_class<app::SceneRootData__Class>(type_info(), "", "SceneRootData");
        }
        inline app::SceneRootData* create() {
            return il2cpp::create_object<app::SceneRootData>(get_class());
        }
    } // namespace SceneRootData
} // namespace app::classes::types
