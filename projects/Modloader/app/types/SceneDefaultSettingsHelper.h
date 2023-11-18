#pragma once
#include <Modloader/app/structs/SceneDefaultSettingsHelper.h>
#include <Modloader/app/structs/SceneDefaultSettingsHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneDefaultSettingsHelper {
        inline app::SceneDefaultSettingsHelper__Class** type_info() {
            static app::SceneDefaultSettingsHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneDefaultSettingsHelper__Class**)(modloader::win::memory::resolve_rva(0x0476C8D0));
            }
            return cache;
        }
        inline app::SceneDefaultSettingsHelper__Class* get_class() {
            return il2cpp::get_class<app::SceneDefaultSettingsHelper__Class>(type_info(), "", "SceneDefaultSettingsHelper");
        }
        inline app::SceneDefaultSettingsHelper* create() {
            return il2cpp::create_object<app::SceneDefaultSettingsHelper>(get_class());
        }
    } // namespace SceneDefaultSettingsHelper
} // namespace app::classes::types
