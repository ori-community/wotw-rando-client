#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BugHornEntity_SlamChargeType__Enum {
        namespace {
            inline app::BugHornEntity_SlamChargeType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BugHornEntity_SlamChargeType__Enum__Class** type_info = &type_info_ref;
        inline app::BugHornEntity_SlamChargeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BugHornEntity_SlamChargeType__Enum__Class>(type_info, "", "BugHornEntity", "SlamChargeType");
        }
        inline app::BugHornEntity_SlamChargeType__Enum* create() {
            return il2cpp::create_object<app::BugHornEntity_SlamChargeType__Enum>(get_class());
        }
    } // namespace BugHornEntity_SlamChargeType__Enum
} // namespace app::classes::types
