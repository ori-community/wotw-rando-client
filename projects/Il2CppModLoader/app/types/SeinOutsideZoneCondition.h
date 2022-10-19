#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinOutsideZoneCondition {
        namespace {
            inline app::SeinOutsideZoneCondition__Class* type_info_ref = nullptr;
        }
        inline app::SeinOutsideZoneCondition__Class** type_info = &type_info_ref;
        inline app::SeinOutsideZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinOutsideZoneCondition__Class>(type_info, "", "SeinOutsideZoneCondition");
        }
        inline app::SeinOutsideZoneCondition* create() {
            return il2cpp::create_object<app::SeinOutsideZoneCondition>(get_class());
        }
    } // namespace SeinOutsideZoneCondition
} // namespace app::classes::types
