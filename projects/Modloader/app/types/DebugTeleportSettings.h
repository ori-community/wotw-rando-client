#pragma once
#include <Modloader/app/structs/DebugTeleportSettings.h>
#include <Modloader/app/structs/DebugTeleportSettings__Array.h>
#include <Modloader/app/structs/DebugTeleportSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugTeleportSettings {
        inline app::DebugTeleportSettings__Class** type_info() {
            static app::DebugTeleportSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugTeleportSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugTeleportSettings__Class* get_class() {
            return il2cpp::get_class<app::DebugTeleportSettings__Class>(type_info(), "", "DebugTeleportSettings");
        }
        inline app::DebugTeleportSettings* create() {
            return il2cpp::create_object<app::DebugTeleportSettings>(get_class());
        }
        inline app::DebugTeleportSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::DebugTeleportSettings__Array>(get_class(), size);
        }
        inline app::DebugTeleportSettings__Array* create_array(const std::vector<app::DebugTeleportSettings*>& items) {
            return il2cpp::array_new<app::DebugTeleportSettings__Array>(get_class(), items);
        }
    } // namespace DebugTeleportSettings
} // namespace app::classes::types
