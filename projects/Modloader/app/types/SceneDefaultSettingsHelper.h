#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneDefaultSettingsHelper {
        inline app::SceneDefaultSettingsHelper__Class** type_info = (app::SceneDefaultSettingsHelper__Class**)(modloader::win::memory::resolve_rva(0x0476C8D0));
        inline app::SceneDefaultSettingsHelper__Class* get_class() {
            return il2cpp::get_class<app::SceneDefaultSettingsHelper__Class>(type_info, "", "SceneDefaultSettingsHelper");
        }
        inline app::SceneDefaultSettingsHelper* create() {
            return il2cpp::create_object<app::SceneDefaultSettingsHelper>(get_class());
        }
    } // namespace SceneDefaultSettingsHelper
} // namespace app::classes::types
