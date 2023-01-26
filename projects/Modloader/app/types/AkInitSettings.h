#pragma once
#include <Modloader/app/structs/AkInitSettings.h>
#include <Modloader/app/structs/AkInitSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkInitSettings {
        inline app::AkInitSettings__Class** type_info() {
            static app::AkInitSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkInitSettings__Class**)(modloader::win::memory::resolve_rva(0x04711D10));
            }
            return cache;
        }
        inline app::AkInitSettings__Class* get_class() {
            return il2cpp::get_class<app::AkInitSettings__Class>(type_info(), "", "AkInitSettings");
        }
        inline app::AkInitSettings* create() {
            return il2cpp::create_object<app::AkInitSettings>(get_class());
        }
    } // namespace AkInitSettings
} // namespace app::classes::types
