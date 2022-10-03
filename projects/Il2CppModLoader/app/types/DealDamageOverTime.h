#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DealDamageOverTime {
        namespace {
            app::DealDamageOverTime__Class* type_info_ref = nullptr;
        }
        app::DealDamageOverTime__Class** type_info = &type_info_ref;
        inline app::DealDamageOverTime__Class* get_class() {
            return il2cpp::get_class<app::DealDamageOverTime__Class>(type_info, "", "DealDamageOverTime");
        }
        inline app::DealDamageOverTime* create() {
            return il2cpp::create_object<app::DealDamageOverTime>(get_class());
        }
    } // namespace DealDamageOverTime
} // namespace app::classes::types
