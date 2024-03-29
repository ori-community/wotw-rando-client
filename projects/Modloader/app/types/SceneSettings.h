#pragma once
#include <Modloader/app/structs/SceneSettings.h>
#include <Modloader/app/structs/SceneSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneSettings {
        inline app::SceneSettings__Class** type_info() {
            static app::SceneSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneSettings__Class**)(modloader::win::memory::resolve_rva(0x04761198));
            }
            return cache;
        }
        inline app::SceneSettings__Class* get_class() {
            return il2cpp::get_class<app::SceneSettings__Class>(type_info(), "", "SceneSettings");
        }
        inline app::SceneSettings* create() {
            return il2cpp::create_object<app::SceneSettings>(get_class());
        }
    } // namespace SceneSettings
} // namespace app::classes::types
