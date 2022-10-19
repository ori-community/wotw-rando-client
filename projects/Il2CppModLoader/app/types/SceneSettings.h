#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneSettings {
        inline app::SceneSettings__Class** type_info = (app::SceneSettings__Class**)(modloader::win::memory::resolve_rva(0x04761198));
        inline app::SceneSettings__Class* get_class() {
            return il2cpp::get_class<app::SceneSettings__Class>(type_info, "", "SceneSettings");
        }
        inline app::SceneSettings* create() {
            return il2cpp::create_object<app::SceneSettings>(get_class());
        }
    } // namespace SceneSettings
} // namespace app::classes::types
