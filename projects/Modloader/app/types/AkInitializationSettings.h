#pragma once
#include <Modloader/app/structs/AkInitializationSettings.h>
#include <Modloader/app/structs/AkInitializationSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkInitializationSettings {
        inline app::AkInitializationSettings__Class** type_info() {
            static app::AkInitializationSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkInitializationSettings__Class**)(modloader::win::memory::resolve_rva(0x04728B80));
            }
            return cache;
        }
        inline app::AkInitializationSettings__Class* get_class() {
            return il2cpp::get_class<app::AkInitializationSettings__Class>(type_info(), "", "AkInitializationSettings");
        }
        inline app::AkInitializationSettings* create() {
            return il2cpp::create_object<app::AkInitializationSettings>(get_class());
        }
    } // namespace AkInitializationSettings
} // namespace app::classes::types
