#pragma once
#include <Modloader/app/structs/DamageRecieverSettings.h>
#include <Modloader/app/structs/DamageRecieverSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageRecieverSettings {
        inline app::DamageRecieverSettings__Class** type_info() {
            static app::DamageRecieverSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageRecieverSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageRecieverSettings__Class* get_class() {
            return il2cpp::get_class<app::DamageRecieverSettings__Class>(type_info(), "", "DamageRecieverSettings");
        }
        inline app::DamageRecieverSettings* create() {
            return il2cpp::create_object<app::DamageRecieverSettings>(get_class());
        }
    } // namespace DamageRecieverSettings
} // namespace app::classes::types
