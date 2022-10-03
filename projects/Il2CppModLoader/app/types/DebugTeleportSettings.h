#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugTeleportSettings {
        namespace {
            app::DebugTeleportSettings__Class* type_info_ref = nullptr;
        }
        app::DebugTeleportSettings__Class** type_info = &type_info_ref;
        inline app::DebugTeleportSettings__Class* get_class() {
            return il2cpp::get_class<app::DebugTeleportSettings__Class>(type_info, "", "DebugTeleportSettings");
        }
        inline app::DebugTeleportSettings* create() {
            return il2cpp::create_object<app::DebugTeleportSettings>(get_class());
        }
        inline app::DebugTeleportSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::DebugTeleportSettings__Array>(get_class(), size);
        }
    } // namespace DebugTeleportSettings
} // namespace app::classes::types
