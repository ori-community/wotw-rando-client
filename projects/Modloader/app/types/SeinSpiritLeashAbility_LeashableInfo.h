#pragma once
#include <Modloader/app/structs/SeinSpiritLeashAbility_LeashableInfo.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility_LeashableInfo__Boxed.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility_LeashableInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritLeashAbility_LeashableInfo {
        inline app::SeinSpiritLeashAbility_LeashableInfo__Class** type_info() {
            static app::SeinSpiritLeashAbility_LeashableInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpiritLeashAbility_LeashableInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpiritLeashAbility_LeashableInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSpiritLeashAbility_LeashableInfo__Class>(type_info(), "", "SeinSpiritLeashAbility", "LeashableInfo");
        }
        inline app::SeinSpiritLeashAbility_LeashableInfo* create() {
            return il2cpp::create_object<app::SeinSpiritLeashAbility_LeashableInfo>(get_class());
        }
        inline app::SeinSpiritLeashAbility_LeashableInfo__Boxed* box(app::SeinSpiritLeashAbility_LeashableInfo value) {
            return il2cpp::box_value<app::SeinSpiritLeashAbility_LeashableInfo__Boxed>(get_class(), value);
        }
    } // namespace SeinSpiritLeashAbility_LeashableInfo
} // namespace app::classes::types
