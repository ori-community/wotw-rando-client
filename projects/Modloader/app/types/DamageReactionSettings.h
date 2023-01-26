#pragma once
#include <Modloader/app/structs/DamageReactionSettings.h>
#include <Modloader/app/structs/DamageReactionSettings__Array.h>
#include <Modloader/app/structs/DamageReactionSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageReactionSettings {
        inline app::DamageReactionSettings__Class** type_info() {
            static app::DamageReactionSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageReactionSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageReactionSettings__Class* get_class() {
            return il2cpp::get_class<app::DamageReactionSettings__Class>(type_info(), "", "DamageReactionSettings");
        }
        inline app::DamageReactionSettings* create() {
            return il2cpp::create_object<app::DamageReactionSettings>(get_class());
        }
        inline app::DamageReactionSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageReactionSettings__Array>(get_class(), size);
        }
        inline app::DamageReactionSettings__Array* create_array(const std::vector<app::DamageReactionSettings*>& items) {
            return il2cpp::array_new<app::DamageReactionSettings__Array>(get_class(), items);
        }
    } // namespace DamageReactionSettings
} // namespace app::classes::types
