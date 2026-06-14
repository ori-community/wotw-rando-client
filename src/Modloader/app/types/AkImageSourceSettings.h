#pragma once
#include <Modloader/app/structs/AkImageSourceSettings.h>
#include <Modloader/app/structs/AkImageSourceSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkImageSourceSettings {
        inline app::AkImageSourceSettings__Class** type_info() {
            static app::AkImageSourceSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkImageSourceSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkImageSourceSettings__Class* get_class() {
            return il2cpp::get_class<app::AkImageSourceSettings__Class>(type_info(), "", "AkImageSourceSettings");
        }
        inline app::AkImageSourceSettings* create() {
            return il2cpp::create_object<app::AkImageSourceSettings>(get_class());
        }
    } // namespace AkImageSourceSettings
} // namespace app::classes::types
