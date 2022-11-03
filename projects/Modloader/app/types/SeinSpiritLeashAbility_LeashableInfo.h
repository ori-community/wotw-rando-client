#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSpiritLeashAbility_LeashableInfo {
        namespace {
            inline app::SeinSpiritLeashAbility_LeashableInfo__Class* type_info_ref = nullptr;
        }
        inline app::SeinSpiritLeashAbility_LeashableInfo__Class** type_info = &type_info_ref;
        inline app::SeinSpiritLeashAbility_LeashableInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSpiritLeashAbility_LeashableInfo__Class>(type_info, "", "SeinSpiritLeashAbility", "LeashableInfo");
        }
        inline app::SeinSpiritLeashAbility_LeashableInfo* create() {
            return il2cpp::create_object<app::SeinSpiritLeashAbility_LeashableInfo>(get_class());
        }
        inline app::SeinSpiritLeashAbility_LeashableInfo__Boxed* box(app::SeinSpiritLeashAbility_LeashableInfo value) {
            return il2cpp::box_value<app::SeinSpiritLeashAbility_LeashableInfo__Boxed>(get_class(), value);
        }
    } // namespace SeinSpiritLeashAbility_LeashableInfo
} // namespace app::classes::types
