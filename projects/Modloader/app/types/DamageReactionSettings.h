#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageReactionSettings__Class.h>
#include <Modloader/app/structs/DamageReactionSettings.h>
#include <Modloader/app/structs/DamageReactionSettings__Array.h>

namespace app::classes::types {
    namespace DamageReactionSettings {
        namespace {
            inline app::DamageReactionSettings__Class* type_info_ref = nullptr;
        }
        inline app::DamageReactionSettings__Class** type_info = &type_info_ref;
        inline app::DamageReactionSettings__Class* get_class() {
            return il2cpp::get_class<app::DamageReactionSettings__Class>(type_info, "", "DamageReactionSettings");
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
