#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageReceiver_DamageEntry__Array {
        namespace {
            inline app::DamageReceiver_DamageEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::DamageReceiver_DamageEntry__Array__Class** type_info = &type_info_ref;
        inline app::DamageReceiver_DamageEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiver_DamageEntry__Array__Class>(type_info, "Moon", "DamageReceiver+DamageEntry[]");
        }
        inline app::DamageReceiver_DamageEntry__Array* create() {
            return il2cpp::create_object<app::DamageReceiver_DamageEntry__Array>(get_class());
        }
    } // namespace DamageReceiver_DamageEntry__Array
} // namespace app::classes::types
