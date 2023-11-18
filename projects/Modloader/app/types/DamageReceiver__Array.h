#pragma once
#include <Modloader/app/structs/DamageReceiver__Array.h>
#include <Modloader/app/structs/DamageReceiver__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageReceiver__Array {
        inline app::DamageReceiver__Array__Class** type_info() {
            static app::DamageReceiver__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageReceiver__Array__Class**)(modloader::win::memory::resolve_rva(0x0470A450));
            }
            return cache;
        }
        inline app::DamageReceiver__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiver__Array__Class>(type_info(), "Moon", "DamageReceiver[]");
        }
        inline app::DamageReceiver__Array* create() {
            return il2cpp::create_object<app::DamageReceiver__Array>(get_class());
        }
    } // namespace DamageReceiver__Array
} // namespace app::classes::types
