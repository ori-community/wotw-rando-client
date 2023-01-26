#pragma once
#include <Modloader/app/structs/VignettingSettings.h>
#include <Modloader/app/structs/VignettingSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VignettingSettings {
        inline app::VignettingSettings__Class** type_info() {
            static app::VignettingSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VignettingSettings__Class**)(modloader::win::memory::resolve_rva(0x0477DED0));
            }
            return cache;
        }
        inline app::VignettingSettings__Class* get_class() {
            return il2cpp::get_class<app::VignettingSettings__Class>(type_info(), "", "VignettingSettings");
        }
        inline app::VignettingSettings* create() {
            return il2cpp::create_object<app::VignettingSettings>(get_class());
        }
    } // namespace VignettingSettings
} // namespace app::classes::types
