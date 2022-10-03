#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberMotionBlurInterestZone_ZoneType__Enum {
        namespace {
            app::UberMotionBlurInterestZone_ZoneType__Enum__Class* type_info_ref = nullptr;
        }
        app::UberMotionBlurInterestZone_ZoneType__Enum__Class** type_info = &type_info_ref;
        inline app::UberMotionBlurInterestZone_ZoneType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberMotionBlurInterestZone_ZoneType__Enum__Class>(type_info, "", "UberMotionBlurInterestZone", "ZoneType");
        }
        inline app::UberMotionBlurInterestZone_ZoneType__Enum* create() {
            return il2cpp::create_object<app::UberMotionBlurInterestZone_ZoneType__Enum>(get_class());
        }
    } // namespace UberMotionBlurInterestZone_ZoneType__Enum
} // namespace app::classes::types
