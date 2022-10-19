#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZone__Array {
        namespace {
            inline app::SeinAbilityRestrictZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::SeinAbilityRestrictZone__Array__Class** type_info = &type_info_ref;
        inline app::SeinAbilityRestrictZone__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityRestrictZone__Array__Class>(type_info, "", "SeinAbilityRestrictZone[]");
        }
        inline app::SeinAbilityRestrictZone__Array* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZone__Array>(get_class());
        }
    } // namespace SeinAbilityRestrictZone__Array
} // namespace app::classes::types
