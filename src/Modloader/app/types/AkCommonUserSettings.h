#pragma once
#include <Modloader/app/structs/AkCommonUserSettings.h>
#include <Modloader/app/structs/AkCommonUserSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCommonUserSettings {
        inline app::AkCommonUserSettings__Class** type_info() {
            static app::AkCommonUserSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkCommonUserSettings__Class**)(modloader::win::memory::resolve_rva(0x047489C8));
            }
            return cache;
        }
        inline app::AkCommonUserSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommonUserSettings__Class>(type_info(), "", "AkCommonUserSettings");
        }
        inline app::AkCommonUserSettings* create() {
            return il2cpp::create_object<app::AkCommonUserSettings>(get_class());
        }
    } // namespace AkCommonUserSettings
} // namespace app::classes::types
