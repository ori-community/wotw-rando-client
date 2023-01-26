#pragma once
#include <Modloader/app/structs/SetBooleanStateDescriptorEntity.h>
#include <Modloader/app/structs/SetBooleanStateDescriptorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetBooleanStateDescriptorEntity {
        inline app::SetBooleanStateDescriptorEntity__Class** type_info() {
            static app::SetBooleanStateDescriptorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetBooleanStateDescriptorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetBooleanStateDescriptorEntity__Class* get_class() {
            return il2cpp::get_class<app::SetBooleanStateDescriptorEntity__Class>(type_info(), "Moon.Timeline", "SetBooleanStateDescriptorEntity");
        }
        inline app::SetBooleanStateDescriptorEntity* create() {
            return il2cpp::create_object<app::SetBooleanStateDescriptorEntity>(get_class());
        }
    } // namespace SetBooleanStateDescriptorEntity
} // namespace app::classes::types
