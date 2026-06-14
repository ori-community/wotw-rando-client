#pragma once
#include <Modloader/app/structs/AkDeviceSettings.h>
#include <Modloader/app/structs/AkDeviceSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkDeviceSettings {
        inline app::AkDeviceSettings__Class** type_info() {
            static app::AkDeviceSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkDeviceSettings__Class**)(modloader::win::memory::resolve_rva(0x04705110));
            }
            return cache;
        }
        inline app::AkDeviceSettings__Class* get_class() {
            return il2cpp::get_class<app::AkDeviceSettings__Class>(type_info(), "", "AkDeviceSettings");
        }
        inline app::AkDeviceSettings* create() {
            return il2cpp::create_object<app::AkDeviceSettings>(get_class());
        }
    } // namespace AkDeviceSettings
} // namespace app::classes::types
