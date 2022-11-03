#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageDealer_OverrideInfo__Array {
        namespace {
            inline app::DamageDealer_OverrideInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::DamageDealer_OverrideInfo__Array__Class** type_info = &type_info_ref;
        inline app::DamageDealer_OverrideInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageDealer_OverrideInfo__Array__Class>(type_info, "", "DamageDealer+OverrideInfo[]");
        }
        inline app::DamageDealer_OverrideInfo__Array* create() {
            return il2cpp::create_object<app::DamageDealer_OverrideInfo__Array>(get_class());
        }
    } // namespace DamageDealer_OverrideInfo__Array
} // namespace app::classes::types
