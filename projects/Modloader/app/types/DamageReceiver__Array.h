#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageReceiver__Array {
        inline app::DamageReceiver__Array__Class** type_info = (app::DamageReceiver__Array__Class**)(modloader::win::memory::resolve_rva(0x0470A450));
        inline app::DamageReceiver__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiver__Array__Class>(type_info, "Moon", "DamageReceiver[]");
        }
        inline app::DamageReceiver__Array* create() {
            return il2cpp::create_object<app::DamageReceiver__Array>(get_class());
        }
    } // namespace DamageReceiver__Array
} // namespace app::classes::types
