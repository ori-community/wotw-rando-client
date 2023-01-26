#pragma once
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/DamageDealer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageDealer__Array {
        inline app::DamageDealer__Array__Class** type_info() {
            static app::DamageDealer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageDealer__Array__Class**)(modloader::win::memory::resolve_rva(0x04704068));
            }
            return cache;
        }
        inline app::DamageDealer__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageDealer__Array__Class>(type_info(), "", "DamageDealer[]");
        }
        inline app::DamageDealer__Array* create() {
            return il2cpp::create_object<app::DamageDealer__Array>(get_class());
        }
    } // namespace DamageDealer__Array
} // namespace app::classes::types
