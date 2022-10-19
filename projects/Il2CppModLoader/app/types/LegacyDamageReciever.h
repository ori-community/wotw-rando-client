#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyDamageReciever {
        inline app::LegacyDamageReciever__Class** type_info = (app::LegacyDamageReciever__Class**)(modloader::win::memory::resolve_rva(0x04797378));
        inline app::LegacyDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::LegacyDamageReciever__Class>(type_info, "", "LegacyDamageReciever");
        }
        inline app::LegacyDamageReciever* create() {
            return il2cpp::create_object<app::LegacyDamageReciever>(get_class());
        }
        inline app::LegacyDamageReciever__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyDamageReciever__Array>(get_class(), size);
        }
        inline app::LegacyDamageReciever__Array* create_array(const std::vector<app::LegacyDamageReciever*>& items) {
            return il2cpp::array_new<app::LegacyDamageReciever__Array>(get_class(), items);
        }
    } // namespace LegacyDamageReciever
} // namespace app::classes::types
