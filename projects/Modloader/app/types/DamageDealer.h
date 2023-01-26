#pragma once
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/DamageDealer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageDealer {
        inline app::DamageDealer__Class** type_info() {
            static app::DamageDealer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageDealer__Class**)(modloader::win::memory::resolve_rva(0x047926D8));
            }
            return cache;
        }
        inline app::DamageDealer__Class* get_class() {
            return il2cpp::get_class<app::DamageDealer__Class>(type_info(), "", "DamageDealer");
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
