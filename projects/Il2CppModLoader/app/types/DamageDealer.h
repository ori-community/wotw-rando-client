#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageDealer {
        inline app::DamageDealer__Class** type_info = (app::DamageDealer__Class**)(modloader::win::memory::resolve_rva(0x047926D8));
        inline app::DamageDealer__Class* get_class() {
            return il2cpp::get_class<app::DamageDealer__Class>(type_info, "", "DamageDealer");
        }
        inline app::DamageDealer* create() {
            return il2cpp::create_object<app::DamageDealer>(get_class());
        }
        inline app::DamageDealer__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageDealer__Array>(get_class(), size);
        }
        inline app::DamageDealer__Array* create_array(const std::vector<app::DamageDealer*>& items) {
            return il2cpp::array_new<app::DamageDealer__Array>(get_class(), items);
        }
    } // namespace DamageDealer
} // namespace app::classes::types
