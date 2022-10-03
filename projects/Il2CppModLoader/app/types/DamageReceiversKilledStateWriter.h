#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageReceiversKilledStateWriter {
        namespace {
            app::DamageReceiversKilledStateWriter__Class* type_info_ref = nullptr;
        }
        app::DamageReceiversKilledStateWriter__Class** type_info = &type_info_ref;
        inline app::DamageReceiversKilledStateWriter__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiversKilledStateWriter__Class>(type_info, "", "DamageReceiversKilledStateWriter");
        }
        inline app::DamageReceiversKilledStateWriter* create() {
            return il2cpp::create_object<app::DamageReceiversKilledStateWriter>(get_class());
        }
    } // namespace DamageReceiversKilledStateWriter
} // namespace app::classes::types
