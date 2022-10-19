#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyDamageReciever__Array {
        namespace {
            inline app::LegacyDamageReciever__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyDamageReciever__Array__Class** type_info = &type_info_ref;
        inline app::LegacyDamageReciever__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyDamageReciever__Array__Class>(type_info, "", "LegacyDamageReciever[]");
        }
        inline app::LegacyDamageReciever__Array* create() {
            return il2cpp::create_object<app::LegacyDamageReciever__Array>(get_class());
        }
    } // namespace LegacyDamageReciever__Array
} // namespace app::classes::types
