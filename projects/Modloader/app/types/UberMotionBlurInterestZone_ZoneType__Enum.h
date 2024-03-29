#pragma once
#include <Modloader/app/structs/UberMotionBlurInterestZone_ZoneType__Enum.h>
#include <Modloader/app/structs/UberMotionBlurInterestZone_ZoneType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberMotionBlurInterestZone_ZoneType__Enum {
        inline app::UberMotionBlurInterestZone_ZoneType__Enum__Class** type_info() {
            static app::UberMotionBlurInterestZone_ZoneType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberMotionBlurInterestZone_ZoneType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberMotionBlurInterestZone_ZoneType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberMotionBlurInterestZone_ZoneType__Enum__Class>(type_info(), "", "UberMotionBlurInterestZone", "ZoneType");
        }
        inline app::UberMotionBlurInterestZone_ZoneType__Enum* create() {
            return il2cpp::create_object<app::UberMotionBlurInterestZone_ZoneType__Enum>(get_class());
        }
    } // namespace UberMotionBlurInterestZone_ZoneType__Enum
} // namespace app::classes::types
