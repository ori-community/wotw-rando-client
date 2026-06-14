#pragma once
#include <Modloader/app/structs/AkOutputSettings.h>
#include <Modloader/app/structs/AkOutputSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkOutputSettings {
        inline app::AkOutputSettings__Class** type_info() {
            static app::AkOutputSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkOutputSettings__Class**)(modloader::win::memory::resolve_rva(0x0474C168));
            }
            return cache;
        }
        inline app::AkOutputSettings__Class* get_class() {
            return il2cpp::get_class<app::AkOutputSettings__Class>(type_info(), "", "AkOutputSettings");
        }
        inline app::AkOutputSettings* create() {
            return il2cpp::create_object<app::AkOutputSettings>(get_class());
        }
    } // namespace AkOutputSettings
} // namespace app::classes::types
