#pragma once
#include <Modloader/app/structs/AkEmitterSettings.h>
#include <Modloader/app/structs/AkEmitterSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkEmitterSettings {
        inline app::AkEmitterSettings__Class** type_info() {
            static app::AkEmitterSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkEmitterSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkEmitterSettings__Class* get_class() {
            return il2cpp::get_class<app::AkEmitterSettings__Class>(type_info(), "", "AkEmitterSettings");
        }
        inline app::AkEmitterSettings* create() {
            return il2cpp::create_object<app::AkEmitterSettings>(get_class());
        }
    } // namespace AkEmitterSettings
} // namespace app::classes::types
