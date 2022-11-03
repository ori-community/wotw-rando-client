#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZone_LerpedHorizontalMovementSetting {
        namespace {
            inline app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Class* type_info_ref = nullptr;
        }
        inline app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Class** type_info = &type_info_ref;
        inline app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Class>(type_info, "", "SeinAbilityRestrictZone", "LerpedHorizontalMovementSetting");
        }
        inline app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting>(get_class());
        }
        inline app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Boxed* box(app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting value) {
            return il2cpp::box_value<app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Boxed>(get_class(), value);
        }
        inline app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array>(get_class(), size);
        }
        inline app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array* create_array(const std::vector<app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting>& items) {
            return il2cpp::array_new<app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array>(get_class(), items);
        }
    } // namespace SeinAbilityRestrictZone_LerpedHorizontalMovementSetting
} // namespace app::classes::types
